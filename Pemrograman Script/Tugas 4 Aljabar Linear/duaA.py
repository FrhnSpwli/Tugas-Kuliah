import numpy as np

A = np.array([[2,2]])
print("vektor a =", A, sep="\n")
B = np.array([[3,4]])
print("vektor b =", B, sep="\n")

C = np.dot(A,B.T)

print("\na.b =", C, sep="\n")

