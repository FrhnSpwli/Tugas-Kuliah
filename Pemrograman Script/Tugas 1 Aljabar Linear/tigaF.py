#ALJABAR LINEAR C
#Andi Farhan Sappewali
#D121211078

import numpy as np

A = np.array([[0,1],[-1,0]])
print("matriks A :\n", A)
AT = np.transpose(A)
print("matriks A^T :\n", AT)
I = np.array([[0,-1],[1,0]])
print("matriks I :\n", I,"\n")

AAT = np.dot(A,AT)
ATA = np.dot(AT,A)
print("AA^T : \n", A, "\n*\n", AT, "\n=\n", AAT, "\n")
print("A^TA : \n", AT, "\n*\n", A, "\n=\n", ATA)