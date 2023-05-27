#ALJABAR LINEAR C
#Andi Farhan Sappewali
#D121211078

import numpy as np

A = np.array([[2,4],[3,5]])
print("matriks A :\n", A)
B = np.array([[1,6],[2,3]])
print("matriks B :\n", B,"\n")

AB = np.dot(A,B)
print("(AB)^T :\n",AB,"^T")
AB_Transpose = np.transpose(AB)
print(AB_Transpose,"\n")

A_Transpose = np.transpose(A)
print("A^T :\n", A_Transpose)
B_Transpose = np.transpose(B)
print("B^T :\n", B_Transpose)

print("\nB^T A^T :")
print(np.dot(B_Transpose,A_Transpose)) 

