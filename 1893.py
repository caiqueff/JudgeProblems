i, f = input().split()

i = int(i)
f = int(f)

if(3 <= f and f <= 96 and f > i):
    print("crescente")
elif(3 <= f and f <= 96 and f < i):
    print("minguante")
elif(0 <= f and f <= 2):
    print("nova")
elif(97 <= f and f <= 100):
    print("cheia")
