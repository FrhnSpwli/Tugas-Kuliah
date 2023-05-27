import numpy as np

A = np.array([[4,2]])
print("vektor a =", A, sep="\n")
B = np.array([[3,2]])
print("vektor b =", B, sep="\n")
k = 4

print("\nk(a + b) =", k, "*", A, "+", B, "=", k*(A+B), sep="\n")
print("\nka + kb =", k, "*", A, "+", k, "*", B, "=", k*A+k*B, sep="\n")