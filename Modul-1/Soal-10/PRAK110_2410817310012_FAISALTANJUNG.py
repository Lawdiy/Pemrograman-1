#alas = 5 cm, tinggi = 12 cm
#luas = 1/2 x a x t = 5 x 6 = 30 cm2
#keliling = a + b + c = 12 + b + 5
#b2 = a2 + c2 = 144 + 25 = 169 = 13
#keliling = 12 + 13 + 5 = 30 cm
import math

alas = 5
tinggi = 12

sisi_miring =math.sqrt(tinggi * tinggi + alas * alas)
keliling = tinggi + sisi_miring + alas
luas = 1/2 * alas * tinggi

print("Diketahui :")
print("Alas = %d cm"% alas)
print("Tinggi = %d cm\n"% tinggi)
print("Jawab :")
print("Sisi A = %d cm"% tinggi)
print("Sisi B = %.f cm"% sisi_miring)
print("Sisi C = %d cm"% alas)
print ("Keliling = %.f cm"% keliling)
print("Luas = %.f cm"% luas)
