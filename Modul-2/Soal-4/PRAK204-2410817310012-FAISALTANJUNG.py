total_variabel = []
while len(total_variabel) < 2:
    line = input()
    if line :
        total_variabel.extend(map(float, line.split()))

jari_jari, tinggi = total_variabel[:6]

volume = 22 / 7 * (jari_jari * jari_jari) * tinggi
luas = 2 * 22 / 7 * jari_jari * (jari_jari + tinggi)
keliling = 2 * 22 / 7 * jari_jari

print(f"Volume = {volume:.2f} \nLuas = {luas:.2f} \nKeliling = {keliling:.2f}\n")