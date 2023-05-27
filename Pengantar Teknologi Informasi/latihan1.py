print("Andi Farhan Sappewali (D121211078)")
print("Program Penjumlahan Dua Bilangan\n")

print("Masukkan bilangan 1:")
bilangan_1 = int(input())
print("Masukkan bilangan 2:")
bilangan_2 = int(input())

jumlah = bilangan_1 + bilangan_2

if jumlah > 50:
    print("\nHasilnya di atas 50")
elif jumlah == 50:
    print("\nHasilnya sama dengan 50")
else:
    print("\nHasilnya di bawah 50")

print("\nHasil dari penjumlahannya adalah:", jumlah)