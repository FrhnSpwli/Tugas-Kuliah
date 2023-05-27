def banner():
	print("Menghitung invers matriks 3x3")

def determinan():
	global det
	det = (bar1[0] * bar2[1] * bar3[2]) + (bar1[1] * bar2[2] * bar3[0]) + (bar1[2] * bar2[0] * bar3[1]) - (bar1[2] * bar2[1] * bar3[0]) - (bar1[0] * bar2[2] * bar3[1]) - (bar1[1] * bar2[0] * bar3[2])
	print("Nilai determinannya adalah: ",det)
	hitung()

def hitung():
	m11 = (bar2[1] * bar3[2]) - (bar2[2] * bar3[1])
	m12 = (-1 * ((bar2[0] * bar3[2]) - (bar2[2] * bar3[0])))
	m13 = (bar2[0] * bar3[1]) - (bar2[1] * bar3[0])

	m21 = (-1 * ((bar1[1] * bar3[2]) - (bar1[2] * bar3[1])))
	m22 = (bar1[0] * bar3[2]) - (bar1[2] * bar3[0])
	m23 = (-1 * ((bar1[0] * bar3[1]) - (bar1[1] * bar3[0])))

	m31 = (bar1[1] * bar2[2]) - (bar1[2] * bar2[1])
	m32 = (-1 * ((bar1[0] * bar2[2]) - (bar1[2] * bar2[0])))
	m33 = (bar1[0] * bar2[1]) - (bar1[1] * bar2[0])

	print("\n\n Kofaktor matriks adalah")
	print("|", m11, m12, m13, "|")
	print("|", m21, m22, m23, "|")
	print("|", m31, m32, m33, "|")

	print("\n\n Adjoin matriks")
	print("|", m11, m21, m31, "|")
	print("|", m12, m22, m32, "|")
	print("|", m13, m23, m33, "|")

	if det == 0:
		print("Tidak bisa dibagi dengan determinan 0")
		exit()

	print("\n\n Invers matriks")
	print("|", m11/det, m21/det, m31/det, "|")
	print("|", m12/det, m22/det, m32/det, "|")
	print("|", m13/det, m23/det, m33/det, "|")

banner()
print("masukan elemen matriks, untuk kolom kedua dan ketiga dipisahkan dengan spasi")
print("contoh :2 4 5")
str_arr = input("masukan baris pertama: ").split(' ')
bar1 = [int(num) for num in str_arr]

str_arr = input("masukan baris kedua  : ").split(' ')
bar2 = [int(num) for num in str_arr]

str_arr = input("masukan baris ketiga : ").split(' ')
bar3 = [int(num) for num in str_arr]

print("|",*bar1,"|")
print("|",*bar2,"|")
print("|",*bar3,"|")

determinan()