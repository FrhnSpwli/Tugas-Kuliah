import numpy as np
import sympy as sp
import matplotlib.pyplot as plt

# Gauss Jordan
def gaussJordan():
    print("Sistem Persamaan Linear")
    print("x + 2y = 11")
    print("3x - y = 5")


    A = np.array([[1,2],[3,-1]])
    B = np.array([11,5])
    C = np.concatenate((A, B[:,None]), axis=1)

    print(C)

    C_rref = sp.Matrix(C).rref()[0]

    print(C_rref)
    exit()

# Grafik
def grafik():
    print("x + 2y = 11")
    print("3x - y = 5")
    
    x = np.linspace(-10,10,100)
    plt.axvline(x=0, color='k')
    plt.axhline(y=0, color='k')

    y = (11 - x)/2
    y2 = (5 - 3*x)/-1
    plt.plot(x,y)
    plt.plot(x,y2)
    plt.show()  
    exit()

# Substitusi
def substitusi():
    print("x + 2y = 11")
    print("3x - y = 5")


# Eleminasi
def eleminasi():
    print("x + 2y = 11")
    print("3x - y = 5")
    


grafik()

