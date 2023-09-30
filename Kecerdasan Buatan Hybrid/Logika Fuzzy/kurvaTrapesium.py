# Kurva Trapesium
# 0, x <= a dan x >= d
# (x-a)/(b-a), a <= x <= b
# 1, b <= x <= c
# (d-x)/(d-c), c <= x <= d

# a = nilai minimum
# b = nilai domain
# c = nilai domain
# d = nilai maksimum
# x = nilai derajat keanggotaan

# Import Library
import numpy as np
import matplotlib.pyplot as plt

# Fungsi Kurva Trapesium
def kurvaTrapesium(a, b, c, d, x):
    if (x <= a) or (x >= d):
        return 0
    elif (x >= b) and (x <= c):
        return 1
    elif (x >= a) and (x <= b):
        return (x-a)/(b-a)
    elif (x >= c) and (x <= d):
        return (d-x)/(d-c)
    
# Fungsi Main
def main():
    #Tanyakan nilai minimum dan maksimum
    a = float(input("Masukkan nilai minimum: "))
    b = float(input("Masukkan nilai domain: "))
    c = float(input("Masukkan nilai domain: "))
    d = float(input("Masukkan nilai maksimum: "))
    x = float(input("Masukkan nilai derajat keanggotaan: "))
    
    # Generate values for the x-axis
    x_values = np.linspace(a, d, 100)
    
    # Generate corresponding y values using the kurvaTrapesium function
    y_values = [kurvaTrapesium(a, b, c, d, x) for x in x_values]
    
    # Calculate the membership degree for the provided x value
    membership_degree = kurvaTrapesium(a, b, c, d, x)

    # Print result
    print("Nilai derajat keanggotaan: ", membership_degree)

    # Visualize the membership function
    plt.figure(figsize=(12, 8))
    plt.plot(x_values, y_values, 'b', linewidth=1.5, label='Kurva Trapesium')
    plt.plot(x, membership_degree, 'ro', markersize=10, label='Nilai derajat keanggotaan')
    plt.vlines(x, 0, membership_degree, linestyle='dashed')
    plt.hlines(membership_degree, 0, x, linestyle='dashed')
    plt.legend(loc='best')
    plt.show()

if __name__ == "__main__":
    main()