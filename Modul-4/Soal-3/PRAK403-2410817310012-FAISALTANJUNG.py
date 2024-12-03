nilai1, nilai2 = map(int, input().split())

i = nilai1
j = nilai2

if i < j:
    while i<=nilai2 and j>=nilai1:
        print(f"{i} {j}", end=" ") 
        if i < nilai2 or j > nilai1:
            print("-", end=" ")
        i +=1
        j -=1   
else:
    while i >= nilai2 and j <= nilai1:
        print(f"{i} {j}", end=" ")
        if i > nilai2 or j < nilai1:
            print("-", end=" ")
        i -=1
        j +=1