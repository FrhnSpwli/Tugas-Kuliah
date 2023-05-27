import numpy as np

A = np.array([[4,2]])
print("vektor a :", A, sep="\n")
B = np.array([[3,2]])
print("vektor b :", B, sep="\n")
AB = A+B
BA = B+A

print("\na + b :", A, "+", B, "=", AB, sep="\n")
print("\nb + a :", B, "+", A, "=", BA, sep="\n")