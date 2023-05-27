# """
# ALJABAR LINEAR C
# Andi Farhan Sappewali
# D121211078
# """

# import numpy as np
# import sympy as sp

# a = np.array([[1,2,3],[4,5,6],[7,8,9]])
# b = np.array([2,3,4])
# A = np.concatenate((a,b[:,None]), axis=1)

# print(A)
# print()
# A_rref = sp.Matrix(A).rref()[0]
# counter = 1
# rowLen = len(A_rref[0,:])
# for i in A_rref:
#     print(i, end=" ")
#     if counter == rowLen:
#         print()
#     counter = counter % rowLen + 1

import numpy as np
import sympy as sp
import matplotlib.pyplot as plt


print("Sistem Persamaan Linear")

A = np.array([[2,1,-1],[3,2,-4],[1,4,1]])
B = np.array([3,1,15])
C = np.concatenate((A, B[:,None]), axis=1)

print(C)

C_rref = sp.Matrix(C).rref()[0]

print(C_rref)

