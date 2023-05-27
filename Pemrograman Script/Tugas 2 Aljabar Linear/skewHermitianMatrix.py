"""
ALJABAR LINEAR C
Andi Farhan Sappewali
D121211078
"""

import numpy as np

A = np.array([[-1j,2+1j],[-2+1j,0]])
print("matriks A :", A, sep="\n")
print("\nA = AT^*")
minA = A*-1
AT = np.transpose(A)
ATC = np.conjugate(AT).astype(complex)
print(minA, sep="\n", end="\n=\n")
print(ATC, sep="\n")