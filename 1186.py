matriz_input = []

O = input()

for i in range(12):
    x = []
    for y in range(12):
        valores = float(input())
        x.append(valores)
    matriz_input.append(x)
soma = 0

if O == 'S':
    for i in range(12):
        for y in range(12):
            if y > 11 - i:
                soma += matriz_input[i][y]
    print(soma)

if O == 'M':
    for i in range(12):
        for y in range(12):
            if y > 11 - i:
                soma += matriz_input[i][y]
        media = soma/(66)
    print("{:.1f}".format(media))
