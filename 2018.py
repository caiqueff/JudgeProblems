dicionario = {}
lista = []

while True:
    try:
        provas = input()
        for i in range(0, 3):
            pais_participante = input()
            if pais_participante in dicionario:
                if i == 0:
                    dicionario[pais_participante][0] += 1
                elif i == 1:
                    dicionario[pais_participante][1] += 1
                elif i == 2:
                    dicionario[pais_participante][2] += 1
            else:
                dicionario[pais_participante] = [0, 0, 0]
                dicionario[pais_participante].append(pais_participante)
                if i == 0:
                    dicionario[pais_participante][0] += 1
                elif i == 1:
                    dicionario[pais_participante][1] += 1
                else:
                    dicionario[pais_participante][2] += 1
    except EOFError:
        break

print("Quadro de Medalhas")

final = sorted(dicionario.values(), key=lambda d: (-d[0], -d[1], -d[2], d[3]))

for chave in final:
    print(chave[3], chave[0], chave[1], chave[2])
