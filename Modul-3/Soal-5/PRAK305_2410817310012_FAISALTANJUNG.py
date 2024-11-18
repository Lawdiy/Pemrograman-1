inputdetik = int(input())

hari = inputdetik // 86400 
jam = (inputdetik % 86400) // 3600
menit = (inputdetik % 3600) // 60
detik = inputdetik % 60

if hari > 0:
    print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")
else:
    print(f"{jam:02}:{menit:02}:{detik:02}")