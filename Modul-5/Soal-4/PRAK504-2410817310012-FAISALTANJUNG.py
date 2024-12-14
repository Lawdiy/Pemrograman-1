def reverse(angka):
    reversed = 0
    while angka != 0:
        reversed = reversed * 10 + angka % 10
        angka //= 10
    return reversed

A, B = map(int,input().split())

A=reverse(A)
B=reverse(B)
C = A+B

print(reverse(C))