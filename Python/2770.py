# -*- coding: utf-8 -*-

saida = []

while True:
	try:

		ent = input().split()
		ent[0] = int(ent[0])
		ent[1] = int(ent[1])
		ent[2] = int(ent[2])

		for i in range(0,ent[2]):
			placa = input().split()
			placa[0] = int(placa[0])
			placa[1] = int(placa[1])
			if((placa[0] <= ent[0] and placa[1] <= ent[1]) or (placa[0] <= ent[1] and placa[1] <= ent[0])):
				saida.append("Sim")
			else:
				saida.append("Nao")

	except:
		for i in saida:
			print(i)
		break