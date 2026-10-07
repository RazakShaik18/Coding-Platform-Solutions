import sys

data = sys.stdin.read().split()

T = int(data[0])
index = 1

for _ in range(T):

    N = int(data[index])
    index += 1

    s = data[index]
    index += 1

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

    if (x == 2 and y == 0) or \
       (x == -2 and y == 0) or \
       (x == 0 and y == 2) or \
       (x == 0 and y == -2):
        print("YES")
    else:
        print("NO")