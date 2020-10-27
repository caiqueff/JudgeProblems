# -*- coding: utf-8 -*-

entrada = input().split()
lados = []

for i in entrada:
	lados.append(int(float(i)*10))

lados.sort(reverse=True)
a = pow(lados[0], 2)
b = pow(lados[1], 2)+pow(lados[2],2)


if(lados[0] >= lados[1]+lados[2]):
	print("NAO FORMA TRIANGULO")
else:
	if(a==b):
		print("TRIANGULO RETANGULO")
	elif(a>b):
		print("TRIANGULO OBTUSANGULO")
	elif(a<b):
		print("TRIANGULO ACUTANGULO")

	if(lados[0] == lados[1] == lados[2]):
		print("TRIANGULO EQUILATERO")
	elif((lados[0] == lados[1]) or (lados[0] == lados[2]) or (lados[2] == lados[1])):
		print("TRIANGULO ISOSCELES")