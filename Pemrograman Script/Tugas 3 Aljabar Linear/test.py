import numpy as np
import matplotlib.pyplot as plt
N = 8
y = np.zeros(N)
x1 = np.linspace(0, 10, N, endpoint=True)
x2 = np.linspace(0, 10, N, endpoint=False)
plt.plot(x1, y, 'o')
#matplotlib.lines.Line2D object at 0x...>]
plt.plot(x2, y + 0.5, 'o')
#matplotlib.lines.Line2D object at 0x...>]
plt.ylim([-0.5, 1])
(-0.5, 1)
plt.show()