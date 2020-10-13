codigo, quantidade = map(int, input().split())

if(codigo == 1):
    total = 4.00 * quantidade
    print("Total: R$ %.2f" % total)

elif(codigo == 2):
    total = 4.50 * quantidade
    print("Total: R$ %.2f" % total)

elif(codigo == 3):
    total = 5.00 * quantidade
    print("Total: R$ %.2f" % total)

elif(codigo == 4):
    total = 2.00 * quantidade
    print("Total: R$ %.2f" % total)

elif(codigo == 5):
    total = 1.50 * quantidade
    print("Total: R$ %.2f" % total)
