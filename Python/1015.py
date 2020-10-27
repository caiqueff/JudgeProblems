# -*- coding: utf-8 -*-

from math import sqrt
a = str(input())
b = str(input())

a = a.split()
ax = float(a[0])
ay = float(a[1])

b = b.split()
bx = float(b[0])
by = float(b[1])

valor = sqrt((ax-bx)**2 + (ay-by)**2)

print(round(valor,4))