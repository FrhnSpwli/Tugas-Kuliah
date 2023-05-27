import matplotlib.pyplot as plt
import numpy as np

# 4x  + 3y = 20
# -5x + 9y = 26

a = np.array([[4,3],[-5,9]])
b = np.array([20,26])
c = np.linalg.solve(a,b) 
print(c[0],c[1])

plt.figure()

# Set x-axis range
plt.xlim((-10,10))
# Set y-axis range
plt.ylim((-10,10))
# Draw lines to split quadrants
plt.plot([-10, 10], [0, 0], color='C0')
plt.plot([0, 0], [-10, 10], color='C0')

# Draw line 4x+3y = 20 => y = (20-4x)/3
x = np.linspace(-10, 10)
y = (20 - 4*x) / 3
plt.plot(x, y, color='C2')

# Draw line -5x+9y = 26 => b = (26+5x) / 9
y = (26 + 5*x) / 9
plt.plot(x, y, color='C2')

# Add solution
plt.scatter(c[0], c[1], marker='x', color='black')
# Annotate solution
plt.annotate('({:0.3f}, {:0.3f})'.format(c[0], c[1]), c+0.5)

plt.title('Quadrant plot')

plt.show()