a = int(input())

for i in range(a):
    n = input()
    x = 0
    y = 0
    for j in range(len(n)):
        if (n[j] == "<"):
            y = y + 1
        if (n[j] == ">" and y > 0):
            x = x + 1
            y = y - 1

    print(x)
