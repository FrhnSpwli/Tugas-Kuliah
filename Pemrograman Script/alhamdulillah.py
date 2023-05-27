#ALHAMDULILLAH
#Program Menghitung Harga Makanan yang Di Pilih

#pernasian
print("Menu Makanan (Nasi)")
print("1. Nasi Goreng")
print("2. Nasi Bakar")
print("3. Nasi Uduk")
print("4. Nasi Kuning")
print("5. Nasi Biasa")
nasi = int(input("Masukkan Pilihan Nasi: "))
jumlah_nasi = int(input("Masukkan Jumlah Nasi: "))
if nasi == 1:
    harga += 10000
elif nasi == 2:
    harga += 12000
elif nasi == 3:
    harga += 8000
elif nasi == 4:
    harga += 9000
elif nasi == 5: 
    harga += 5000
total_nasi = harga * jumlah_nasi

#perayaman
print("Menu Makanan (Ayam)")
print("1. Ayam Goreng")
print("2. Ayam Bakar")
print("3. Ayam Kecap")
print("4. Ayam Kremes")


#persayuran
print("Menu Makanan (Sayur)")
print("1. Sayur Asem")
print("2. Sayur Lodeh")
print("3. Sayur Kuning")
print("4. Sayur Kacang")

#input

ayam = int(input("Masukkan Pilihan Ayam: "))
jumlah_ayam = int(input("Masukkan Jumlah Ayam: "))
sayur = int(input("Masukkan Pilihan Sayur: "))
jumlah_sayur = int(input("Masukkan Jumlah Sayur: "))
harga = 0

#proses


print("Pakai Ayam (Y/N)")
pakai_ayam = input()
if pakai_ayam == "Y":
    if ayam == 1:
        harga += 10000
    elif ayam == 2:
        harga += 12000
    elif ayam == 3:
        harga += 8000
    elif ayam == 4:
        harga += 9000
    total_ayam = harga * jumlah_ayam

if sayur == 1:
    harga += 10000
elif sayur == 2:
    harga += 12000
elif sayur == 3:
    harga += 8000
elif sayur == 4:
    harga += 9000
elif sayur == 5:
    harga += 0
total_sayur = harga * jumlah_sayur

total = total_nasi + total_ayam + total_sayur

#output
print("Total Harga: ", total)