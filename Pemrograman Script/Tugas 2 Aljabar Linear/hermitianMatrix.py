"""
ALJABAR LINEAR C
Andi Farhan Sappewali
D121211078
"""

import numpy as np

A = np.array([[3,1-2j,4+7j],[1+2j,-4,-2j],[4-7j,2j,5]])
print("matriks A :\n", A, sep="\n")
print("\nA = AT^*")
AT = np.transpose(A)
ATC = np.conjugate(AT).astype(complex)
print(A, sep="\n", end="\n=\n")
print(ATC, sep="\n")


