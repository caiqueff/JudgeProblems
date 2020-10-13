n = int(input())
x = {}

while n:
    n -= 1
    lingua = input()
    traducao = input()
    x[lingua] = traducao

m = int(input())

while m:
    m -= 1
    crianca = input()
    lingua = input()
    print(crianca)
    print(x[lingua])
    print()
