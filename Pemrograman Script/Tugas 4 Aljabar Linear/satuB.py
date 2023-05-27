import numpy as np

A = np.array([[4,2]])
print("vektor a :", A, sep="\n")
B = np.array([[3,2]])
print("vektor b :", B, sep="\n")
C = np.array([[4,2]])
print("vektor c :", C, sep="\n")

BC = B+C
AB = A+B

print("\na + (b + c) =", A, "+", BC, "=", A+BC, sep="\n")
print("\n(a + b) + c =", AB, "+", C, "=", AB+C, sep="\n")

