total_variabel = []
while len(total_variabel) < 6:
    line = input()
    if line:
        total_variabel.extend(map(float, line.split()))

a, b, i, j, x, y = total_variabel[:6]

hasil = (((a - b) * i) / j) - (x + y)

print(f"Hasil: {hasil:.3f}")
