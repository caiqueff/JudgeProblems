n = int(input())
palavras = input().split()

for ind, i in enumerate(palavras):
    if (i[0:2] == 'UR' and len(i) == 3):
        palavras[ind] = 'URI'
    if (i[0:2] == 'OB' and len(i) == 3):
        palavras[ind] = 'OBI'

i = ' '.join(palavras)
print(i)
