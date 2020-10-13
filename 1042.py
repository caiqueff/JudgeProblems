lista = []
a, b, c = [int(x) for x in input().split()]
lista.append(a)
lista.append(b)
lista.append(c)
lista.sort()
for i, v in enumerate(lista):
    print(lista[i])
print()
print("{0}\n{1}\n{2}".format(a, b, c))
