import numpy as np

A = np.array([[3,0],[-1,2],[1,1]])
print("matriks A =", A, sep="\n")

C = np.array([[1,4,2],[3,1,5]])
print("matriks C =", C, sep="\n")

AT = np.transpose(A)
print("matriks A transpose =", AT, sep="\n")

duaAT = AT*2
print("2A^T =", duaAT, sep="\n")

print("\n2A^T + C =", duaAT+C, sep="\n")

