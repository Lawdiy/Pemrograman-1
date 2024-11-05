import math
total_variabel = []
while len(total_variabel) < 2:
    line = input()
    if line :
        total_variabel.extend(map(float, line.split()))

a, b = total_variabel[:2]

c = ((b * b) - (a * a))
alas = math.sqrt(c)

tinggi = a
keliling = a + b + alas
luas = 0.5 * alas * tinggi

print(f"Alas = {alas:.0f} cm\nTinggi = {tinggi:.0f} cm\nKeliling = {keliling:.0f} cm\nLuas = {luas:.0f} cm^2")