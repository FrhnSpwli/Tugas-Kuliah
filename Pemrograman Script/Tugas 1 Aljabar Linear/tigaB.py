#ALJABAR LINEAR C
#Andi Farhan Sappewali
#D121211078

import numpy as np

A = np.array([[2,4],[3,5]])
print("matriks A :\n", A)
B = np.array([[1,6],[2,3]])
print("matriks B :\n", B)
C = np.array([[3,4],[5,6]])
print("matris C :\n", C,"\n")

AB = np.dot(A,B)
ABC1 = np.dot(AB,C)
print("(AB)C :\n",AB,"\n*\n", C,"\n=\n", ABC1)

BC = np.dot(B,C)
ABC2 = np.dot(A,BC)
print("\nA(BC) :\n", A, "\n*\n", BC,"\n=\n", ABC2)
