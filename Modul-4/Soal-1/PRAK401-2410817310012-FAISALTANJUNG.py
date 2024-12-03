angka, lambang = (input().split())
for i in range(1, 51):
    if i % int(angka) == 0:
        print(lambang, end=" ")
    else:
        print(i, end=" ")
        