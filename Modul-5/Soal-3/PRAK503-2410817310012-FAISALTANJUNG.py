def maksimal(a, b):
    return a if a > b else b
def minimal(a, b):
    return a if a < b else b

bilangan = int(input())

maks = -100000
minim = 100000

nilaiinput = list(map(int, input().split()))
for nilai in nilaiinput:
    maks = maksimal(maks,nilai)
    minim = minimal(minim, nilai)

print(f"{maks} {minim}")