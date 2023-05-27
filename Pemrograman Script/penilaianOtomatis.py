

# if(85 <= nilaiSiswa <= 100):
#     print("Nilai A")
# elif(75 <= nilaiSiswa <= 84):
#     print("Nilai B")
# elif(65 <= nilaiSiswa <= 74):
#     print("Nilai C")
# elif(55 <= nilaiSiswa <= 64):
#     print("Nilai D")
# else:
#     print("Nilai E")

from unicodedata import numeric

nilaiSiswa = int(input("Nilai Siswa : "))
while(nilaiSiswa != numeric):
    nilaiSiswa = int(input("Nilai Siswa : "))
    if(85 <= nilaiSiswa <= 100):
        print("Nilai A")
    elif(75 <= nilaiSiswa <= 84):
        print("Nilai B")
    elif(65 <= nilaiSiswa <= 74):
        print("Nilai C")
    elif(55 <= nilaiSiswa <= 64):
        print("Nilai D")
    else:
        print("Nilai E")