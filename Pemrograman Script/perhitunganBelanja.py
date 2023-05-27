semangka = 25000
apel = 12000
jeruk = 6000
anggur = 15000

print("Harga semangka per kg = Rp. 25.000")
print("Harga apel per kg = Rp. 12.000")
print("Harga jeruk per kg = Rp. 6.000")
print("Harga anggur per kg = Rp. 15.000")
print("Harga untuk setiap buah diskon 5%")

semangka = int(input("Berapa kg semangka yang dibeli? "))
apel = int(input("Berapa kg apel yang dibeli? "))
jeruk = int(input("Berapa kg jeruk yang dibeli? "))
anggur = int(input("Berapa kg anggur yang dibeli? "))

totalSemangka = semangka * 25000
totalApel = apel * 12000
totalJeruk = jeruk * 6000
totalAnggur = anggur * 15000
totalSemua = totalSemangka + totalApel + totalJeruk + totalAnggur

totalSemangkaDiskon = totalSemangka * 0.05
totalApelDiskon = totalApel * 0.05
totalJerukDiskon = totalJeruk * 0.05
totalAnggurDiskon = totalAnggur * 0.05

totalSemangkaDiskon = totalSemangka - totalSemangkaDiskon
totalApelDiskon = totalApel - totalApelDiskon
totalJerukDiskon = totalJeruk - totalJerukDiskon
totalAnggurDiskon = totalAnggur - totalAnggurDiskon

print("Total belanjaan anda adalah Rp.", totalSemua)
print("Total diskon yang anda dapatkan adalah Rp.", totalSemangkaDiskon + totalApelDiskon + totalJerukDiskon + totalAnggurDiskon)
print("Total yang harus anda bayar adalah Rp.", totalSemua - (totalSemangkaDiskon + totalApelDiskon + totalJerukDiskon + totalAnggurDiskon))
