# -*- coding: utf-8 -*-

var = input().split()

for i in range(0,4):
	var[i] = int(var[i])

if(var[3] >= var[1]):
	horas = var[2]-var[0]
	minutos = var[3]-var[1]
else:
	horas=var[2]-var[0]-1
	minutos = 60-(var[1]-var[3])

if(horas==0 and minutos==0):
	horas = 24

if(horas < 0):
	horas = horas + 24

print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %(horas, minutos))