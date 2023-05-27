import numpy as np

B = np.array([[4,-1],[0,2]])
print("matriks B =", B, sep="\n")
C = np.array([[1,4,2],[3,1,5]])
print("matriks C =", C, sep="\n")

BT = np.transpose(B)
print("matriks B transpose =", BT, sep="\n")

CT = np.transpose(C)
print("matriks C transpose =", CT, sep="\n")

limaCT = CT*5
print("5C^T =", limaCT, sep="\n")

print("B^T + 5C^T =", BT+limaCT, sep="\n")