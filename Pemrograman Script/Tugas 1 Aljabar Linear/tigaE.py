#ALJABAR LINEAR C
#Andi Farhan Sappewali
#D121211078

import numpy as np

A = np.array([[1,2],[2,3]])
print("matriks A :\n", A)
A_invers = np.linalg.inv(A)
print("matriks A^1 : \n", A_invers)
B = A_invers
AB = np.dot(A,B).astype(int)
print("\nA^1. A^(-1) : \n", A, "\n*\n", A_invers, "\n=\n", AB)