def hitung (nilai1, nilai2):
    angka = (nilai1 - nilai2)
    return -angka if angka < 0 else angka

def mutlak(angka):
    -angka if angka < 0 else angka
    return angka

a, c, b, d = map(int, input().split())

Hasil = hitung(a,b) + hitung(c,d)
print(f"{mutlak(Hasil)}")
