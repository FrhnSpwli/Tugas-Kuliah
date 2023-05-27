"""
ALJABAR LINEAR C
Andi Farhan Sappewali
D121211078
"""

import numpy as np

A = np.array([[2,3,4,1,0,0],[-3,5,6,0,1,0],[4,3,2,0,0,1]]).astype(float)
print("matriks A :", A, sep="\n")

# A[2,:] = A[2,:]+(A[0,:]*(-2)) #baris 3 = baris 3 + (-2) * baris 1
# print("\nA_31(-2)=", A, sep="\n")

#baris 1 = baris 1 *1/2
A[0,:] = A[0,:]/2
print("\nA_1(1/2)=", A, sep="\n")

#baris 2 = baris 2 + (3) * baris 1
A[1,:] = A[1,:]+(A[0,:]*3)
print("\nA_21(3)=", A, sep="\n")

#baris 3 = baris 3 + (-4) * baris 1
A[2,:] = A[2,:]+(A[0,:]*(-4))
print("\nA_31(-4)=", A, sep="\n")

#baris 2 = baris 2 *1/9.5
A[1,:] = A[1,:]/9.5
print("\nA_2(1/9.5)=", A, sep="\n")
