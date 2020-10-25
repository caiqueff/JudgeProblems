quant = int(input())
notas = []

for _ in range(quant):
    notas.append(list(map(int, input().split())))

for turma in notas:
    media = sum(turma[1:])/turma[0]
    notas_maiores = [nota for nota in turma[1:] if nota>media]
    #Python 3.8
    print(f'{(len(notas_maiores)/turma[0])*100:.3f}%')