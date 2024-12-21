baris, kolom = map(int, input().split())
angka = list(map(int, input().split()))
matriks = []
for i in range(baris):
    matriks.append(angka[i * kolom:(i + 1) * kolom])

for baris in matriks:
    print(" ".join(map(str, baris)))