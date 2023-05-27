import numpy 

print("=============================================")
print("Persamaan Linear Menggunakan Metode Doolittle")
print("=============================================")
print("")
print("a0 + 9a1 + 81a2")
print("a0 + 6a1 + 36a2")
print("a0 + 12a1 + 144a2")
print("")

#Matriks Augmented
A = numpy.array([[1, 9, 81], [1, 6, 36], [1, 12, 144]])  #membuat matriks A menggunakan numpy array
print("A :")
print(A)
b = numpy.array([174, 236, 308]) #vektor konstanta pada sistem persamaan linear
print("b :")
print(b)
print("")

def Doolittle(A): #Dekomposisi matriks (membuat matriks Lower dan Upper) menggunakan A sebagai parameter
    n = len(A) #panjang A, diperoleh dari jumlah baris pada matriks A
    #LU faktorisasi
    L = numpy.zeros((n, n)) #matriks Lower, dideklarasikan sebagai matriks dengan elemen 0, dan berordo n x n
    U = numpy.zeros((n, n)) #matriks Upper, dideklarasikan sebagai matriks dengan elemen 0, dan berordo n x n
    for k in range(n): #iterasi untuk nilai k dari 0 sampai n-1
        L[k][k] = 1 #mengubah baris diagonal menjadi satu
        for j in range(k, n): #iterasi untuk nilai j dari k sampai n-1
            U[k][j] = A[k][j] - sum(L[k][s] * U[s][j] for s in range(k)) #mengisi matriks Upper
            #pengurangan antara elemen matriks A[k][j] dengan jumlah perkalian antara elemen L[k][s] dan U[s][j]
            #  untuk setiap s dari 0 sampai k-1.
        for i in range(k + 1, n): #iterasi untuk nilai i dari k+1 sampai n-1
            L[i][k] = (A[i][k] - sum(L[i][s] * U[s][k] for s in range(k))) / U[k][k] #mengisi matriks Lower
            #pengurangan antara elemen matriks A[i][k] dengan jumlah perkalian antara elemen L[i][s] dan U[s][k]
            #  untuk setiap s dari 0 sampai k-1. Kemudian, dibagi dengan nilai elemen diagonal utama U[k][k].
    return L, U

def solve(A, b):
    n = len(A) #panjang dari A, dalam hal ini akan bernilai 3 karena matriks A memiliki jumlah baris 3. Len(A) menghitung baris pada matriks A
    L, U = Doolittle(A) #mengambil nilai Lower dan Upper dari fungsi Doolitle(A) 
    print("L :")
    print(L)
    print("U :")
    print(U)
    y = numpy.zeros(n) #deklarasi nilai y, diawal akan dideklarasikan sebagai matriks 0 dengan baris sebanyak n
    x = numpy.zeros(n) #deklarasi nilai x, diawal akan dideklarasikan sebagai matriks 0 dengan baris sebanyak n
    for i in range(n):
        y[i] = (b[i] - sum(L[i][j] * y[j] for j in range(i + 1, n))) / L[i][i] #mengisi nilai y
        #Mengurangi hasil kali dari elemen yang sesuai dalam matriks "L" dan vektor "y" 
        # dari elemen yang sesuai dalam vektor "b", dan kemudian membagi hasilnya dengan elemen 
        # diagonal yang sesuai dalam matriks segitiga bawah "L"
    for i in reversed(range(n)):
        x[i] = (y[i] - sum(U[i][j] * x[j] for j in range(i + 1, n))) / U[i][i] #mengisi nilai x
        #Mengurangi hasil kali dari elemen yang sesuai dalam matriks "U" dan vektor "x"
        # dari elemen yang sesuai dalam vektor "y", dan kemudian membagi hasilnya dengan elemen
        # diagonal yang sesuai dalam matriks segitiga atas "U"

    print("")
    print("y :")
    print(y)
    print("")
    print("x :")
    print(x)
    print("")
    return x

a = solve(A, b) #mengisi variabel a dengan nilai x yang merupakan return dari method solve berparamater A, b
print("Dalam rentang t = 6 hingga t = 12, nilai kecepatannya adalah :")
for t in range(6, 13): #sesuai dengan soal yang diberikan, untuk waktu dari 6 hingga 12
    v = a[0] + a[1]*t + a[2]*t*t #iterasi menghitung nilai dengan rumus v = a0 + a1*t + a2*t*t dengan t = 6 hingga 12
    print("t = " + str(t) + " v = " + str(v)) 