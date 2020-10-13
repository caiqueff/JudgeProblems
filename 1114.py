while True:
    senha_correta = 2002
    senha_digitada = int(input())
    if(senha_digitada != senha_correta):
        print("Senha Invalida")
    elif(senha_digitada == senha_correta):
        print("Acesso Permitido")
        break
