# -*- coding: utf-8 -*-

ent = input()

ent = ent.split()

a = int(ent[0])
b = int(ent[1])
c = int(ent[2])
d = int(ent[3])

if(b>c and d>a and (c+d)>(a+b) and c>0 and d>0 and a%2==0):
	print("Valores aceitos")
else:
	print("Valores nao aceitos")