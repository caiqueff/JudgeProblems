lista = []
while True:
    idade = int(input())
    if(idade > 0):
        lista.append(idade)

    else:
        print("%.2f" % (sum(lista)/len(lista)))
        break
