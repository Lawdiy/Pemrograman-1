n, kelipatan = map(int, input().split())
total = 0

for i in range(1, n + 1):
    hasil_baris = 0

    for j in range(1, i + 1):
        hasil_baris += j * kelipatan

    print("(", end="")
    for j in range(1, i + 1):
        print(f"{j} * {kelipatan}", end="")
        if j < i:
            print(" + ", end="")
    print(f") = {hasil_baris}")

    total += hasil_baris
print(total)
