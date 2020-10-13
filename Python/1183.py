matriz_input = []

letra_input = input()

for i in range(12):
    x = []
    for y in range(12):
        valores = float(input())
        x.append(valores)
    matriz_input.append(x)
soma = 0

if letra_input == 'S':
    for i in range(12):
        for y in range(12):
            if i < y:
                soma += matriz_input[i][y]
    print(soma)

if letra_input == 'M':
    for i in range(12):
        for y in range(12):
            if i < y:
                soma += matriz_input[i][y]
        media = soma/(66)
    print("{:.1f}".format(media))
