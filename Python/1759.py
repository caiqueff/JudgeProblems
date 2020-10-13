valor = int(input())
lista = ""
while(valor > 0):
    lista = lista + "Ho "
    valor = valor - 1

lista = lista[:-1]
lista = lista + "!"
print(lista)
