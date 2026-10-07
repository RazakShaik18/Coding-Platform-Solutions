# cook your dish here
T = int(input())

for _ in range(T):

    N = int(input())
    s = input()

    x = 0
    y = 0

    for ch in s:

        if ch == 'U':
            y += 1

        elif ch == 'D':
            y -= 1

        elif ch == 'L':
            x -= 1

        elif ch == 'R':
            x += 1

    if abs(x) + abs(y) == 2:
        print("YES")
    else:
        print("NO")