# import numpy as np

# #Metode Gauss - Seidel

# print("==================================================")
# print("Persamaan Linear Menggunakan Metode Gauss - Seidel")
# print("==================================================")

# #Persamaan Linear
# print("5x1 + x2 + 2x3 = 19")
# print("x1 + 4x2 - 2x3 = -2")
# print("2x1 + 3x2 + 8x3 = 39")

# #Membuat Augmented Matriks
# print("Matriks Augmented")
# A = np.array([[5, 1, 2], [1, 4, -2], [2, 3, 8]])  #membuat matriks A menggunakan numpy array
# print("A :")
# print(A)

# b = np.array([19, -2, 39]) #vektor konstanta pada sistem persamaan linear
# print("b :")
# print(b)
# print("")

# toleransi = 0.001 #deklarasi nilai toleransi error, sesuai dengan nilai toleransi error pada soal
# print("Toleransi Error =", toleransi)
# print("")
# max_iteration = 100 #deklarasi batas iterasi

# #Mengecek Matriks (apakah element diagonalnya lebih besar dari hasil jumlah element pada barisnya)
# def check(A):
#     n = len(A) #panjang A, diperoleh dari jumlah baris pada matriks A
#     for i in range(n): #iterasi untuk nilai i dari 0 sampai n-1
#         s = 0 #deklarasi s sebagai 0
#         for j in range(n): #iterasi untuk nilai j dari 0 sampai n-1
#             if i != j: #jika i tidak sama dengan j
#                 s += abs(A[i][j]) #maka s akan ditambah dengan nilai absolut dari elemen A[i][j]
#         if abs(A[i][i]) < s: #jika nilai absolut dari elemen A[i][i] lebih kecil dari s
#             return False #maka akan mengembalikan nilai False
#     return True #jika tidak, maka akan mengembalikan nilai True

# #Mengecek apakah matriks A merupakan matriks diagonal dominan
# if check(A): #jika hasil dari fungsi check(A) adalah True
#     condition = True #boolean konvergensi bernilai True
# else: #jika hasil dari fungsi check(A) adalah False
#     print("Matriks A bukan merupakan matriks diagonal dominan")
    
# if condition == True: #jika matriks A merupakan matriks diagonal dominan
#     x1 = 0 #nilai awal
#     x2 = 0 #nilai awal
#     x3 = 0 #nilai awal

#     konvergensi = False #deklarasi untuk variable boolean konvergensi dengan nilai False
#     x_old = np.array([x1, x2, x3]) #memasukkan nilai awal x1, x2, x3 sebagai x_old

#     print("Proses Iterasi Iterasi")
#     print("k,    x1,    x2,     x3,     er,      er,     er")
#     for k in range(1, max_iteration): #iterasi dimulai dari 1 hingga max_iteration - 1
#         x1 = (19-x2-2*x3)/5 #rumus x1
#         x2 = (-2-x1+2*x3)/4 #rumus x2
#         x3 = (39-2*x1-3*x2)/8 #rumus x3
#         x = np.array([x1, x2, x3]) #memasukkan nilai dari x1, x2, x3 ke variabel x sebagai numpy array

#         #selisih antara hasil iterasi yang baru dengan hasil iterasi yang lama
#         er = np.abs(x - x_old)
        
#         print("%d, %.4f, %.4f, %.4f, %.4f, %.4f, %.4f"%(k, x1, x2, x3, er[0], er[1], er[2]))
        
#         #menghitung besarnya error atau selisih antara hasil iterasi yang baru dan yang lama
#         dx = np.sqrt(np.dot(er, er))
        
#         if dx < toleransi: #jika besarnya error lebih kecil dari error toleransi
#             konvergensi = True #boolean konvergensi bernilai True
#             print("Iterasi Berhenti (Telah mencapai toleransi error)")
#             break
            
#         #menyimpan nilai x terbaru
#         x_old = x
        
#     if not konvergensi: #jika iterasi sudah mencapai max iteration dan masih belum mencapai konvergensi
#         print("Iterasi tidak mencapai konvergensi.")
