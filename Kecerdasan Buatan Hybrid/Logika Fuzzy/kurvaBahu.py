# Kurva Bahu
# 1, 0 <= x <= a dan c <= x <= d
# (b-x)/(b-a), a <= x <= b (bahu kiri)
# (x-b)/(c-b), b <= x <= c (bahu kanan)

# a = nilai minimum
# b = nilai domain
# c = nilai domain
# d = nilai maksimum
# x = nilai derajat keanggotaan

# Import Library
import numpy as np
import matplotlib.pyplot as plt

# Input
a = float(input("Masukkan nilai minimum: "))
b = float(input("Masukkan nilai domain: "))
c = float(input("Masukkan nilai domain: "))
d = float(input("Masukkan nilai maksimum: "))
x = float(input("Masukkan nilai derajat keanggotaan: "))

# Kurva Bahu
def kurvaBahu(a, b, c, d, x):
    if ((0 <= x <= a) and (c <= x <= d)):
        return 1
    elif (a <= x <= b):
        return (b-x)/(b-a)
    elif (b <= x <= c):
        return (x-b)/(c-b)

# Plotting
x1 = np.arange(a-2, d+2, 0.01)































y1 = [kurvaBahu(a, b, c, d, x) for x in x1]
plt.plot(x1, y1)
plt.title('Kurva Bahu')
plt.xlabel('x')
plt.ylabel('y')
plt.show()

