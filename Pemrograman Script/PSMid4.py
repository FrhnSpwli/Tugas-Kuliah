print("1. Pembandingan Nilai")
print("2. Pembandingan Nilai dengan rentang 20 hingga 80")
print("3. Pengecek Nilai sama dengan 10 atau 90")

pilih = input("Pilih menu 1/2/3 : ")

if pilih == "1":
    a = int(input("Masukkan nilai a : "))
    b = int(input("Masukkan nilai b : "))
    if a > b:
        print("Nilai a lebih besar dari b")
    elif a < b:
        print("Nilai a lebih kecil dari b")
    else:
        print("Nilai a sama dengan b")
elif pilih == "2":
    a = int(input("Masukkan nilai a : "))
    if a >= 20 and a <= 80:
        print("Nilai a berada dalam rentang 20 hingga 80")
    else:
        print("Nilai a tidak berada dalam rentang 20 hingga 80")
elif pilih == "3":
    a = int(input("Masukkan nilai a : "))
    if a == 10 or a == 90:
        print("Nilai a sama dengan 10 atau 90")
    else:
        print("Nilai a tidak sama dengan 10 atau 90")
else:
    print("Input salah")
