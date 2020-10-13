d = {'C': 0, 'R': 0, 'S': 0}
n = {'C': 'coelhos', 'R': 'ratos', 'S': 'sapos'}

for x in range(int(input())):
    a = input().split()
    d[a[1]] += int(a[0])

t = sum(d.values())

print('Total: %d cobaias' %t)
print('Total de coelhos: %d' %d['C'])
print('Total de ratos: %d' %d['R'])
print('Total de sapos: %d' %d['S'])
print('Percentual de coelhos: %.2f' %float(((100*d['C'])/t)), '%')
print('Percentual de ratos: %.2f' %float(((100*d['R'])/t)), '%')
print('Percentual de sapos: %.2f' %float(((100*d['S'])/t)), '%')
