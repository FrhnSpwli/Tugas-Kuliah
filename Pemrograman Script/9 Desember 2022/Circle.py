#Gambar sebuah lingkaran dengan jari-jari 1 pada sumbu XY, beri warna hijau untuk daerah di bagian dalam lingkaran dan warna biru untuk daerah di luar lingkaran.

import matplotlib.pyplot as plt
import numpy as np

#membuat data
x = np.linspace(-1, 1, 100)
y = np.linspace(-1, 1, 100)

#membuat meshgrid
X, Y = np.meshgrid(x, y) 

#membuat fungsi
Z = X**2 + Y**2

#membuat plot
fig, ax = plt.subplots()
ax.contourf(X, Y, Z, levels = 1, colors = 'blue')
ax.contour(X, Y, Z, levels = 1, colors = 'green')
ax.contourf(X, Y, Z, levels = [0, 1], colors = ['green', 'blue'])
plt.show()