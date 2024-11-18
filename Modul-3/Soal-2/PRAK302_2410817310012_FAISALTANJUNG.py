bilangan = int(input())

if bilangan >= 80:
    print("A")
elif bilangan >= 70 and bilangan <= 79:
    print("B")
elif bilangan >= 60 and bilangan <= 69:
    print("C")
elif bilangan >= 50 and bilangan <= 59:
    print("D")
elif bilangan < 50:
    print("E")