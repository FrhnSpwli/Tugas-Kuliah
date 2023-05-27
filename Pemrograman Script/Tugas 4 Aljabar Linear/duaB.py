import numpy as np

A = np.array([[1,2,-2]])
print("vektor a =", A, sep="\n")
B = np.array([[3,0,1]])
print("vektor b =", B, sep="\n")

C = np.cross(A,B)

print("a x b =", C, sep="\n")


