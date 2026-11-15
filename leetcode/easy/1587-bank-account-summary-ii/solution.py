
import pandas as pd

def account_summary(users: pd.DataFrame, transactions: pd.DataFrame) -> pd.DataFrame:

    df = users.merge(transactions, on='account', how='inner')

    result = df.groupby(['account', 'name'])['amount'].sum().reset_index()

    result = result[result['amount'] > 10000]

    result = result.rename(columns={'amount': 'balance'})

    return result[['name', 'balance']]

    