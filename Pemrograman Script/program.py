print("Persegi Panjang ygy")

p = int(input("input p: "))
l = int(input("input l: "))

if(p + l) >= 50:
    print("hitung luas")
    print("luas = ", p * l)
else:
    print("hitung keliling")
    print("keliling = ", 2 * (p + l))