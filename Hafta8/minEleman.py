import random
from array import array


i = 0

k = int(input("Dizinin boyutunu giriniz: "))
dizi = []

while(i < k):
    a = random.randint(1, 10000000)
    dizi.append(a)
    i = i + 1
enK = dizi[0]
for i in range(k-1):
    if(enK > dizi[i]):
        enK = dizi[i]

print(enK)
