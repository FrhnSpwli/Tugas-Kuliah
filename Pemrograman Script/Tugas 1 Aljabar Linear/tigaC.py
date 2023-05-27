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

BC = B+C
AB = np.dot(A,B)
AC = np.dot(A,C)
ABC1 = np.dot(A,BC)
ABC2 = AB+AC

print("A(B+C) :\n", A,"\n*\n", BC,"\n=\n", ABC1)
print("\nAB + AC :\n", AB,"\n+\n", AC,"\n=\n", ABC2)