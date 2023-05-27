"""
ALJABAR LINEAR C
Andi Farhan Sappewali
D121211078
"""

import numpy as np
import sympy as sp

b = np.array([[1,4,2,],[0,2,1],[2,3,2]])
a = np.array([[1,0,0],[0,1,0],[0,0,1]])
A = np.concatenate((a,b[:,None]), axis=1)

print(A)
print()
A_rref = sp.Matrix(A).rref()[0]
counter = 1
rowLen = len(A_rref[0,:])
for i in A_rref:
    print(i, end="   ")
    if counter == rowLen:
        print()
    counter = counter % rowLen + 1