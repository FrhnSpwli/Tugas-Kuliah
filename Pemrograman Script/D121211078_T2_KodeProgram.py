import numpy as np

print("====================================================================================================")
print("                         Persamaan Linear Menggunakan Metode Gauss - Seidel")
print("====================================================================================================")

#Membuat Augmented Matriks
n = int(input("Masukkan ukuran matriks augmented: "))
A = np.zeros((n,n))
b = np.zeros(n)
for i in range(n):
    row = input("Masukkan baris %d dari matriks augmented (dipisahkan oleh spasi): " % (i+1)).split()
    for j in range(n):
        A[i][j] = float(row[j])
    b[i] = float(row[n])

print("")
print("Persamaan Linear")
for i in range(n): #mengubah bentuk matriks augmented yang diinput user ke dalam persamaan linear
    row = ""
    for j in range(n):
        row += "%.2fx%d + " % (A[i][j], j+1)
    row += "%.2f" % (b[i])
    print(row)
print("")
print("Matriks Augmented:")
print("Matriks A:")
print(A)
print("")
print("Vektor b:")
print(b)
print("")

#Input nilai toleransi error dan maksimum iterasi
toleransi = float(input("Masukkan nilai toleransi error: "))
max_iteration = int(input("Masukkan nilai maksimum iterasi: "))

#Mengecek Matriks (apakah element diagonalnya lebih besar dari hasil jumlah element pada barisnya)
def check(A):
    n = len(A) #panjang A, diperoleh dari jumlah baris pada matriks A
    for i in range(n): #iterasi untuk nilai i dari 0 sampai n-1
        s = 0 #deklarasi s sebagai 0
        for j in range(n): #iterasi untuk nilai j dari 0 sampai n-1
            if i != j: #jika i tidak sama dengan j
                s += abs(A[i][j]) #maka s akan ditambah dengan nilai absolut dari elemen A[i][j]
        if abs(A[i][i]) < s: #jika nilai absolut dari elemen A[i][i] lebih kecil dari s
            return False #maka akan mengembalikan nilai False
    return True #jika tidak, maka akan mengembalikan nilai True

#Mengecek apakah matriks A merupakan matriks diagonal dominan
if check(A): #jika hasil dari fungsi check(A) adalah True
    condition = True #boolean konvergensi bernilai True
else: #jika hasil dari fungsi check(A) adalah False
    print("Matriks A bukan merupakan matriks diagonal dominan")
    
if condition == True: #jika matriks A merupakan matriks diagonal dominan
    x1 = 0 #nilai awal
    x2 = 0 #nilai awal
    x3 = 0 #nilai awal

    n = len(A)
    x = np.zeros(n)
    x_old = np.zeros(n)
    konvergensi = False #deklarasi untuk variable boolean konvergensi dengan nilai False

    print("Proses Iterasi Iterasi")
    print("k,            [ x (x1, x2, x3) ],          [ error toleransi (x1, x2, x3)],            dx")
    for k in range(1, max_iteration + 1):
        for i in range(n): #rumus untuk x1, x2, x3
            sigma = 0
            for j in range(n):
                if j != i:
                    sigma += A[i][j] * x[j]
            x[i] = (b[i] - sigma) / A[i][i]
        #menghitung nilai x[i] (x1, x2, atau x3) dengan menggunakan nilai x[j] (x1, x2, atau x3) pada 
        # iterasi sebelumnya dan nilai A[i][j] (elemen pada baris ke-i dan kolom ke-j dari matriks A)
        # serta b[i] (konstanta pada baris ke-i dari vektor b)
            
        #selisih antara hasil iterasi yang baru dengan hasil iterasi yang lama
        er = np.abs(x - x_old)
        
        #menghitung besarnya error atau selisih antara hasil iterasi yang baru dan yang lama
        dx = np.sqrt(np.dot(er, er))
        
        print("%d,   %s,   %s,   %.10f" % (k, str(x), str(er), dx))

        if dx < toleransi:
            konvergensi = True
            print("Iterasi Berhenti (Telah mencapai toleransi error)")
            break
        
        #menyimpan nilai x terbaru
        x_old = x.copy()

        
    if not konvergensi: #jika iterasi sudah mencapai max iteration dan masih belum mencapai konvergensi
        print("Iterasi tidak mencapai konvergensi.")
#solusi
print("")
print("Solusi:")
print("x1 = %.10f" % (x[0]))
print("x2 = %.10f" % (x[1]))
print("x3 = %.10f" % (x[2]))