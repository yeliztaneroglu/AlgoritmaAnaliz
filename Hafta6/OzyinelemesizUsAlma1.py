def usAl(taban, us):
    sonuc = 1
    while us > 0:
        if us % 2 == 0:
            us = us / 2
            taban = taban * taban
        else:
            us = us - 1
            sonuc = sonuc * taban
            us = us / 2
            taban = taban * taban
    return sonuc
print(usAl(2,5))
