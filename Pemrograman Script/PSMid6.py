#rumus mencari luas persegi panjang
def luas_persegi_panjang(panjang, lebar):
    luas = panjang * lebar
    return luas

#rumus mencari keliling persegi panjang
def keliling_persegi_panjang(panjang, lebar):
    keliling = 2 * (panjang + lebar)
    return keliling

#tanah pak Indra
PTI = 93
LTI = 50

#tanah pak Dodit
PTD = 4*PTI
LTD = 0.5*LTI

#luas tanah pak Dodit
print("Luas tanah pak Dodit adalah", luas_persegi_panjang(PTD, LTD))
print("Keliling tanah pak Dodit adalah", keliling_persegi_panjang(PTD, LTD))



