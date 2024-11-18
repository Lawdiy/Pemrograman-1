bilangan1,bilangan2,bilangan3 =input().split()


if bilangan1 > bilangan2 and bilangan2 > bilangan3: # 1 > 2 > 3
    print(f"{bilangan3} {bilangan2} {bilangan1}")
elif bilangan1 > bilangan3 and bilangan3 > bilangan2 : # 1 > 3 > 2
    print(f"{bilangan2} {bilangan3} {bilangan1}")
elif bilangan2 > bilangan1 and bilangan1 > bilangan3 : # 2 > 1 > 3
    print(f"{bilangan3} {bilangan1} {bilangan2}")
elif bilangan2 > bilangan3 and bilangan3 > bilangan1 : # 2 > 3 > 1
    print(f"{bilangan1} {bilangan3} {bilangan2}")
elif bilangan3 > bilangan1 and bilangan1 > bilangan2 : # 3 > 1 > 2
    print(f"{bilangan2} {bilangan1} {bilangan3}")
elif bilangan3 > bilangan2 and bilangan2 > bilangan1: # 3 > 2 > 1
    print(f"{bilangan1} {bilangan2} {bilangan3}")