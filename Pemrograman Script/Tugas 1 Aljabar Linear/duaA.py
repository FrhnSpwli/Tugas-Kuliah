"""
ALJABAR LINEAR C
Andi Farhan Sappewali
D121211078
"""

import numpy as np

A = np.array([[2,4],[3,5]])
print("matriks A :\n", A)
B = np.array([[1,6],[2,3]])
print("matriks B :\n", B,"\n")
AtambahB = A+B
BtambahA = B+A

print("A + B :\n", A,"\n+\n", B,"\n=\n", AtambahB,"\n")
print("B + A :\n", B,"\n+\n", A,"\n=\n", BtambahA,"\n")