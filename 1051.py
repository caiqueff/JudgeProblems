from decimal import Decimal

salario = float(input())

if (salario <= 2000.00):
    print("Isento")
elif(salario <= 3000.00):
    imposto = ((salario - 2000.00) * 0.08)
    imposto = round(Decimal(imposto), 2)
    print("R$", imposto)
elif (salario <= 4500.00):
    imposto = (((salario - 3000.00) * 0.18) + 80.00)
    imposto = round(Decimal(imposto), 2)
    print("R$", imposto)
elif (salario > 4500.00):
    imposto = (((salario - 4500) * 0.28) + 350.00)
    imposto = round(Decimal(imposto), 2)
    print("R$", imposto)
