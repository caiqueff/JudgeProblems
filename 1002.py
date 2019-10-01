from decimal import Decimal

raio = input()

area = 3.14159 * (float(raio) * float(raio))
area = round(Decimal(area), 4)

print("A=" + format(area))
