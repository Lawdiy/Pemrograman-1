jumlah_ruangan = int(input())

zetsu = list(map(int, input().split()))

for i in range(jumlah_ruangan):
    zetsu[i] *= (i + 1)

print(" ".join(map(str, zetsu)))
