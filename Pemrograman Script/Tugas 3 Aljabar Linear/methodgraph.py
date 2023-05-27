# ALJABAR LINEAR KELAS C
# ANDI FARHAN SAPPEWALI
# D121211078

import numpy as np
import matplotlib.pyplot as plt

A = np.array(([3,-2],[2,4]))
B = np.array((7,10))
X = np.linalg.solve(A,B).astype(int)
print("Diberikan persamaan \n3x - 2y = 7 \n2x + 4y = 10 \nMaka solusinya adalah x = {} dan y = {}".format(X[0],X[1]))

x = np.linspace(-10,10)
plt.axvline(x=0, color='g')
plt.axhline(y=0, color='y')

y = (8 - 2*x)/3
y2 = (5 - 3*x)/1
plt.plot(x,y, 'r')
plt.plot(x,y2, 'b')
plt.scatter(X[0], X[1], marker='o', color='black')
plt.annotate('({}, {})'.format(X[0], X[1]), X+0.5)
plt.show()