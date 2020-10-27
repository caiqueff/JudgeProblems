# -*- coding: utf-8 -*-

from math import sqrt

testes = int(input())
retorno = ""

for i in range(0, testes):
	ret = input().split()
	circ = input().split()
	altura = int(ret[1])
	largura = int(ret[0])
	nivel = int(circ[1])
	centro = [int(circ[2]), int(circ[3])]
	atingiu = False
	distancia = 0

	a = [int(ret[2]), int(ret[3])]
	b = [int(ret[2]), int(ret[3])+altura]
	c = [int(ret[2])+largura, int(ret[3])+altura]
	d = [int(ret[2])+largura, int(ret[3])]

	if(circ[0] == "fire"):
		dano = 200
		if(nivel == 1):
			raio = 20
		elif(nivel == 2):
			raio = 30
		elif(nivel == 3):
			raio = 50
	elif(circ[0] == "water"):
		dano = 300
		if(nivel == 1):
			raio = 10
		elif(nivel == 2):
			raio = 25
		elif(nivel == 3):
			raio = 40
	elif(circ[0] == "earth"):
		dano = 400
		if(nivel == 1):
			raio = 25
		elif(nivel == 2):
			raio = 55
		elif(nivel == 3):
			raio = 70
	elif(circ[0] == "air"):
		dano = 100
		if(nivel == 1):
			raio = 18
		elif(nivel == 2):
			raio = 38
		elif(nivel == 3):
			raio = 60

	if((centro[0]<=a[0]) and (centro[1]<=a[1])):
		distancia = sqrt(pow((centro[0]-a[0]), 2) + pow((centro[1]-a[1]), 2))
		if(distancia <= raio):
			atingiu = True

	if((centro[0]<=b[0]) and (centro[1]>=b[1])):
		distancia = sqrt(pow((centro[0]-b[0]), 2) + pow((centro[1]-b[1]), 2))
		if(distancia <= raio):
			atingiu = True

	if((centro[0]>=c[0]) and (centro[1]>=c[1])):
		distancia = sqrt(pow((centro[0]-c[0]), 2) + pow((centro[1]-c[1]), 2))
		if(distancia <= raio):
			atingiu = True

	if((centro[0]>=d[0]) and (centro[1]<=d[1])):
		distancia = sqrt(pow((centro[0]-d[0]), 2) + pow((centro[1]-d[1]), 2))
		if(distancia <= raio):
			atingiu = True

	if(atingiu == False and distancia == 0):
		if(centro[0] > c[0]):
			distancia = centro[0] - c[0]
			if(distancia <= raio):
				atingiu = True
		elif(centro[0] < a[0]):
			distancia = a[0] - centro[0]
			if(distancia <= raio):
				atingiu = True
		elif(centro[1] > b[1]):
			distancia = centro[1] - b[1]
			if(distancia <= raio):
				atingiu = True
		elif(centro[1] < a[1]):
			distancia = a[1] - centro[1]
			if(distancia <= raio):
				atingiu = True

	if(distancia == 0):
		atingiu = True

	if(i != 0):
		retorno = retorno + "\n"

	if(atingiu == True):
		retorno = retorno + str(dano)
	else:
		retorno = retorno + "0"

print(retorno)