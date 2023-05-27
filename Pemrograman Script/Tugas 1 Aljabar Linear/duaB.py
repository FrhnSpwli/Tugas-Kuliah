"""
ALJABAR LINEAR C
Andi Farhan Sappewali
D121211078
"""

import numpy as np

A = np.array([[2,4],[3,5]])
print("matriks A :\n", A)
B = np.array([[1,6],[2,3]])
print("matriks B :\n", B)
C = np.array([[3,4],[5,6]])
print("matriks C :\n", C)

AtambahB = A+B
print("\n(A+B)+C :\n(", A,"\n+\n", B,")\n+\n", C,"\n=\n", AtambahB,"\n+\n", C,"\n=\n", AtambahB+C,"\n")
BtambahC = B+C
print("(B+C)+A :\n(", B,"\n+\n", C,")\n+\n", A,"\n=\n", BtambahC,"\n+\n", A,"\n=\n", BtambahC+A,"\n")
ABC = A+B+C
print("A+B+C :\n", A,"\n+\n(", B,"\n+\n", C,")\n=\n", ABC,"\n")
