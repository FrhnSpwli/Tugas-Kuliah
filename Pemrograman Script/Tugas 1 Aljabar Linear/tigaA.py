#ALJABAR LINEAR C
#Andi Farhan Sappewali
#D121211078

import numpy as np

A = np.array([[2,4]])
print("matriks A :\n", A)
B = np.array([[1],[2]])
print("matriks B :\n", B,"\n")

BT = np.transpose(B)

AB = np.dot(A,B)
print("AB :\n",AB)
BA = np.dot(B,A)
print("\nBA :\n",BA)

ABT = np.dot(A,BT)
print("\nABT :\n",ABT)
