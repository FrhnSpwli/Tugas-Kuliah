#ALJABAR LINEAR C
#Andi Farhan Sappewali
#D121211078

import numpy as np
A = np.array([[2,4],[3,5]])
print("matriks A :\n", A)
B = np.array([[1,6],[2,3]])
print("matriks B :\n", B)
C = A+B
print("A+B :\n", C)
C_Transpose = np.transpose(C)
print("(A+B)^T :\n", C_Transpose)
A_Transpose = np.transpose(A)
print("A^T :\n", A_Transpose)
B_Transpose = np.transpose(B)
print("B^T :\n", B_Transpose)
D = A_Transpose + B_Transpose
print("A^T + B^T :\n", D)