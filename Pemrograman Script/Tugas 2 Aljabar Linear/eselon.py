import numpy as np
A = np.matrix([[1,0,0,0],[0,1,0,0],[0,0,1,0],[0,0,0,1]]) #array untuk matrix

Dimen = np.shape(A) #dimensi matrix       
print(Dimen) #untuk menampilkan dimensi matrix                         
row = np.shape(A)[0] #jumlah baris              
col = np.shape(A)[1] #jumlah kolom               
PR1 = True #variabel                           
PR2 = True #variabel                           
                            
Matriks_0 = np.zeros([row,col]) #matrix 0            

Arr1=[0 for i in range (row)] 

if np.all(A==Matriks_0): #kondisi jika matrix A equal matrix 0
    print("ini matriks 0")         
else:
    for x in range (0,row):
        if np.all(A[x,:] == 0) : #kondisi jika baris matrix A = 0
            Arr1[x]= Q + 1
            Q = Q+1

        else:
            for y in range(0,col):
                if A[x,y] == 1: #mendeteksi posisi leading entry pada matrix A
                    Arr1[x] = y
                    break
                elif A[x,y] == 0: #mendeteksi nilai 0 diposisi segitiga bawah matrix A
                    continue
                else:
                    PR1 = False #jika leading entry bukan 1 maka PR1 = False
                    print("Matriks ini bukan eselon,1")
                    exit()                    

if PR1 == False: #jika PR1 = False maka matriks bukan eselon
    print("Matriks A bukan eselon")
else:
    
    for x in range (0, row-1): #mendeteksi posisi leading entry pada matrix A
        if Arr1[x] < Arr1[x + 1]:
            continue
        else:
            PR2 = False #
            break
if PR2 == True: #jika PR2 = True maka matriks eselon
    print("Matriks A", A, sep="\n")
    print("Merupakan Matriks Eselon")
else: #jika PR2 = False maka matriks bukan eselon
    print("Matriks A", A, sep="\n")
    print("bukan Eselon")

