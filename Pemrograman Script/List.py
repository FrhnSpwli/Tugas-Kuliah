#List
MyList = [1,2,3,4,5]
print(MyList)
print("Elemen pertama : ", MyList[0])
print()

#List yang menyimpan umur dari 10 mahasiswa
Umur = [19, 22, 19, 24, 20, 25, 26, 24, 25, 24]
print(Umur)
print()

#Urutan dari terkecil ke terbesar
Umur.sort()
print(Umur)
print()

#Tambahkan umur terkecil dan terbesar
Umur.append(19)
Umur.append(26)
print(Umur)
print()

#Median
Median = len(Umur)/2
print("Median : ", Umur[int(Median)])
print()

#Rata-rata
print("Rata-rata : ", sum(Umur)/len(Umur))
print()

#Range
print("Range : ", Umur[11]-Umur[0])
print()

#Perbandingan dengan fungsi abs
print("Nilai rata-rata terkecil", abs(Umur[0]-sum(Umur)/len(Umur)), "> nilai rata-rata terbesar", abs(Umur[11]-sum(Umur)/len(Umur)))
print()