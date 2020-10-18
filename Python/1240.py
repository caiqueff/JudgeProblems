n = int(input())
while (n > 0 ):
  linha = input()
  l = linha.split()
  if l[0].endswith(l[1]):
    print('encaixa')  
  else:
    print('nao encaixa')
  n = n-1
