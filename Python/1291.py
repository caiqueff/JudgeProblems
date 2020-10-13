from math import pi, sqrt

while True:
    try:
        lados = float(input())
        externo = (- lados) * lados * (3 * (sqrt(3) - 4) + 2 * pi) / 3
        pontos = 4 * (lados * lados * (1 - pi / 4) - (externo) / 2)
        centro = lados * lados - pontos - externo

        print('%.3f %.3f %.3f' % (centro, pontos, externo))
    except EOFError:
        break
