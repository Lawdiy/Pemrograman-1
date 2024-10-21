#Harga sepatu A adalah 400000,B 350000
a = 400000
b = 350000
print("Harga sepatu A adalah", a)
print("Harga sepatu B adalah", b)

#Sepatu A mendapat diskon 13% sehingga harganya menjadi 348000
#Sepatu B mendapat diskon 21% sehingga harganya menjadi 276500
hasil_a = a - (a * 13/100)
hasil_b = b - (b * 21/100)

print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {hasil_a:.0f}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {hasil_b:.0f}")