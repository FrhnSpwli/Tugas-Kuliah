"""
ALJABAR LINEAR C
Andi Farhan Sappewali
D121211078
"""

import numpy as np
A = np.array([[2,4],[3,5]])
print("matriks A :\n", A, "\n")
k = 4
print("nilai k adalah ", k,"\n")

kA = k*A
print("(kA)^T :\n", kA,"^T")
kAT1 = np.transpose(kA)
print(kAT1,"\n")

AT = np.transpose(A)
print("kA^T :\n","k",AT)
kAT2 = k*AT
print(kAT2)
