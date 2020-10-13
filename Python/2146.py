while True:
    try:
        valor = int(input())
        senha = valor - 1
        print(senha)
    except EOFError:
        break
