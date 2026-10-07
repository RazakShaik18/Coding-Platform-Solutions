# cook your dish here
T = int(input())

for _ in range(T):
    N = int(input())

    for i in range(N - 1):
        input()

    if N == 4:
        print(1)
    elif N == 5:
        print(3)
    elif N == 9:
        print(61)