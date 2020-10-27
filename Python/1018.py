# -*- coding: utf-8 -*-

valor = int(input())
valor1 = valor

cem = int(valor/100)
valor = valor - cem*100

cinq = int(valor/50)
valor = valor - cinq*50

vinte = int(valor/20)
valor = valor - vinte*20

dez = int(valor/10)
valor = valor - dez*10

cinco = int (valor/5)
valor = valor - cinco*5

dois = int(valor/2)
valor = valor - dois*2

um = int(valor)

print("""%d
%d nota(s) de R$ 100,00
%d nota(s) de R$ 50,00
%d nota(s) de R$ 20,00
%d nota(s) de R$ 10,00
%d nota(s) de R$ 5,00
%d nota(s) de R$ 2,00
%d nota(s) de R$ 1,00""" %(valor1, cem, cinq, vinte, dez, cinco, dois, um))