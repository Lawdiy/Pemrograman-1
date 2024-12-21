n = int(input())
print("Matriks A")

A = []
for i in range(n):
    A.append(list(map(int, input().split())))

print("Matriks B")
B = []
for i in range(n):
    B.append(list(map(int, input().split())))

AXB = [[0 for _ in range(n)] for _ in range(n)]

for i in range(n):
    for j in range(n):
        for k in range(n):
            AXB[i][j] += A[i][k] * B[k][j]

print("Matriks AXB")
for row in AXB:
    print(" ".join(map(str, row)))
