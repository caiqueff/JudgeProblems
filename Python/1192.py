casos = int(input())

while casos > 0:
    a = input()
    prod1 = int(a[0])
    prod2 = int(a[2])

    if(prod1 == prod2):
        print(prod1 * prod2)
    elif(a.isupper()):
        b = int(a[2])
        a = int(a[0])
        print(b - a)
    elif(a.islower()):
        b = int(a[2])
        a = int(a[0])
        print(a + b)
    casos = casos - 1
