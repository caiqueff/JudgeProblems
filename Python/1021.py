# -*- coding: utf-8 -*-

valor = float(input())

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
valor = valor-um

cinq2 = int(valor/0.5)
valor = valor - cinq2*0.5

vc = int(valor/0.25)
valor = valor - vc*0.25

dez2 = int(valor / 0.1)
valor = valor - dez2*0.1

cinco2 = int(valor / 0.05)
valor = valor - cinco2*0.05

um2 = int(valor / 0.009)

print("""NOTAS:
%d nota(s) de R$ 100.00
%d nota(s) de R$ 50.00
%d nota(s) de R$ 20.00
%d nota(s) de R$ 10.00
%d nota(s) de R$ 5.00
%d nota(s) de R$ 2.00
MOEDAS:
%d moeda(s) de R$ 1.00
%d moeda(s) de R$ 0.50
%d moeda(s) de R$ 0.25
%d moeda(s) de R$ 0.10
%d moeda(s) de R$ 0.05
%d moeda(s) de R$ 0.01""" %(cem, cinq, vinte, dez, cinco, dois, um, cinq2, vc, dez2, cinco2, um2))