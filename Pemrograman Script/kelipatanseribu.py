#for loop kelipatan 1000

for i in range(1,10001):
    if i % 1000 == 0:
        print(i)

#dengan while loop buat bintang"
i = 1
while i <= 5:
    if i == 1 or i == 5:
        print("  *")
    elif i == 2 or i == 4:
        print(" ***")
    else:
        print("*****")
    i += 1

b = 1
batas = 3
while b <= batas:
    print(" " *2* (batas - b) + "* " * (b * 2 - 1))
    b += 1

b = batas - 1
while b >= 1:
    print(" " *2* (batas - b) + "* " * (b * 2 - 1))
    b -= 1

#Inisialisasi sebuah dictionary
mahasiswa = {'nama_depan': 'Andi', 
        'nama_akhir': 'Becce',
        'Umur': 18, 
        'MK': ['Script', 'Basis Data', 'IMK']
        }

def cetak(mahasiswa):
    for i in mahasiswa:
        print(i, ':', mahasiswa[i])

def get_umur(mahasiswa):
    return mahasiswa['Umur']


cetak(mahasiswa)
print(get_umur(mahasiswa))

