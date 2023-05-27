import numpy as np

B = np.array([[4,2]])
print("vektor b :", B, sep="\n")
k = 4
s = 3

print("\nk(sb) :", k, "*", s, B, "=", k*s*B, sep="\n")
print("\n(ks)b :", k, "*", s, B, "=", k*s*B, sep="\n")
print("\nb(ks) :", B, "*", k, "*", s, "=", B*k*s, sep="\n")