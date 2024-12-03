while True:
    try:
        pilihan = int(input("Pilih program \n1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian \n5. Exit \nMasukkan Pilihan :"))
    except ValueError:
        print("Input anda salah, silahkan coba lagi.\n")
        continue

    if 1 <= pilihan <= 4:
        try:
            nilai1 = float(input("Masukkan nilai pertama: "))
            nilai2 = float(input("Masukkan nilai kedua: "))
        except ValueError:
            continue

        if pilihan == 1:
            hasil = nilai1 + nilai2
            print(f"Hasil Penjumlahan antara {nilai1:.2f} dan {nilai2:.2f} adalah {hasil:.2f}\n")
        elif pilihan == 2:
            hasil = nilai1 - nilai2
            print(f"Hasil Pengurangan antara {nilai1:.2f} dan {nilai2:.2f} adalah {hasil:.2f}\n")
        elif pilihan == 3:
            hasil = nilai1 * nilai2
            print(f"Hasil Perkalian antara {nilai1:.2f} dan {nilai2:.2f} adalah {hasil:.2f}\n")
        elif pilihan == 4:
                hasil = nilai1 / nilai2
                print(f"Hasil Pembagian antara {nilai1:.2f} dan {nilai2:.2f} adalah {hasil:.2f}\n")
    elif pilihan == 5:
        print("Terima kasih, telah menggunakan kalkulator Faisal Tanjung")
        break
    else:
        print("Input anda salah, silahkan coba lagi\n")
