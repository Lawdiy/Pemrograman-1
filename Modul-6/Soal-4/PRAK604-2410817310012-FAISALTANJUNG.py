shikamaru = input().strip()
pesan = input().strip()

if len(shikamaru) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    hasil = []
    bintang = 0
    pagar = 0

    for s, p in zip(shikamaru, pesan):
        if s == p and s != ' ':
            hasil.append('*')
            bintang += 1
        elif s == ' ' and p == ' ':
            hasil.append(' ')
        else:
            hasil.append('#')
            pagar += 1

    print("".join(hasil))
    print(f"* = {bintang}")
    print(f"# = {pagar}")

    if bintang > pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
