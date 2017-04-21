import random
from array import array


i = 0

k = int(input("Dizinin boyutunu giriniz: "))
dizi = []

while(i < k):
    a = random.randint(1, 10000000)
    dizi.append(a)
    i = i + 1
enB = dizi[0]
for i in range(k-1):
    if(enB < dizi[i]):
        enB = dizi[i]

print(enB)
