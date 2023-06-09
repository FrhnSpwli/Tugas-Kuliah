#Andi Farhan Sappewali
#D121211078

#Meminta Inputan User
bilangan = []
n = int(input("Masukkan jumlah bilangan Anda: "))

for i in range(n):
    bil = int(input("Masukkan bilangan ke-%d: " % (i + 1)))
    #Mengecek apakah bilangan berada di antara 0 dan 100
    if bil < 0 or bil > 100:
        print ("Bilangan harus berada di antara 0 dan 100")
        #Meminta kembali inputan
        bil = int(input("Masukkan bilangan ke-%d: " % (i + 1)))
    #Memasukkan bilangan ke dalam list
    bilangan.append(bil)

#Menghitung Rata-Rata
rata = sum(bilangan) / n
print("Rata-rata bilangan Anda adalah", format(rata))

#Menentukan Huruf dari nilai Rata-Rata
if rata >= 86 and rata <= 100:
    print("nilai A")
elif rata >= 71 and rata <= 85:
    print("nilai B")
elif rata >= 51 and rata <= 70:
    print("nilai C")
elif rata >= 31 and rata <= 50:
    print("nilai D")
elif rata >= 0 and rata <= 30:
    print("nilai E")
else:
    print("nilai tidak valid")