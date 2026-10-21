import pandas as pd

def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    salaries = employee["salary"].drop_duplicates().sort_values(ascending=False)

    ans = salaries.iloc[1] if len(salaries) >= 2 else None

    return pd.DataFrame({"SecondHighestSalary": [ans]})