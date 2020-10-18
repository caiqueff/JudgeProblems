linha = input()
l = [int(i) for i in linha.split(' ')]

fuso = l[0] + l[2]
while (fuso < 0):
  fuso = 24 + fuso

while (fuso > 23):
  fuso = 0 + fuso - 24

horaf = fuso + l[1]

while (horaf < 0):
  horaf = 24 + horaf

while (horaf > 23):
  horaf = 0 + horaf - 24

print(horaf)
