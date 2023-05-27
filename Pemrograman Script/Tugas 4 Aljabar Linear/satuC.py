import numpy as np

A = np.array([[2,2]])
print("vektor a =", A, sep="\n")
B = np.array([[2,3]])
print("vektor b =", B, sep="\n")
C = np.array([[7,4]])
print("vektor c =", C, sep="\n")

AB = A+B

print("\na + b =", A, "+", B, "=", AB, sep="\n")

print("\nc =", C, sep="\n")

if AB.all() == C.all():
    print("\nTrue")
else:
    print("\nFalse")