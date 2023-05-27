import numpy as np

A = np.array([[2,2]])
print("vektor a :", A, sep="\n")
k = 3
s = 2

print("\n(k+s)b :", k, "+", s, A, "=", (k+s)*A, sep="\n")
print("\nkb + sb :", k, "*", A, "+", s, "*", A, "=", k*A+s*A, sep="\n")