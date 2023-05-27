#Mencari Luas Lingkaran

#Deklarasi
r = 7

#Proses
#Jika nilai r kelipatan 7
if r % 7 == 0:
    phi = 22/7

    luas = phi * r * r
    print("Luas Lingkaran adalah", luas)

#Jika nilai r bukan kelipatan 7
else:
    phi = 3.14

    luas = phi * r * r
    print("Luas Lingkaran adalah", luas)

#Mencari Keliling Lingkaran
#Deklarasi
r = 7

if r % 7 == 0:
    phi = 22/7

    keliling = 2 * phi * r
    print("Keliling Lingkaran adalah", keliling)

else:
    phi = 3.14

    keliling = 2 * phi * r
    print("Keliling Lingkaran adalah", keliling)