nilai1 = float(input("Masukkan Nilai Pertama: "))
nilai2 = float(input("Masukkan Nilai Kedua: "))

hasil = nilai1 + nilai2


if nilai1.is_integer():
    nilai1_output = f"{int(nilai1)}"
else:
    nilai1_output = f"{nilai1:.2f}"


print(f"Hasil dari penjumlahan nilai pertama \"{nilai1_output}\" dan nilai kedua \"{nilai2}\" adalah \"{hasil:.2f}\"\n")