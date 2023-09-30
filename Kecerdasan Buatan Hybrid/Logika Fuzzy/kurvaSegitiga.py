# Kurva Segitiga 
# 0, x <= a dan x >= c
# (x-a)/(b-a), a <= x <= b
# (b-x)/(c-b), b <= x <= c

# a = nilai minimum
# b = nilai domain
# c = nilai maksimum
# x = nilai derajat keanggotaan

# Import Library
import numpy as np
import matplotlib.pyplot as plt

# Fungsi Kurva Segitiga
def kurvaSegitiga(a, b, c, x):
    if (x <= a) or (x >= c):
        return 0
    elif (x >= b):
        return (c-x)/(c-b)
    elif (x <= b):
        return (x-a)/(b-a)
    
# Fungsi Main
def main():
    #Tanyakan nilai minimum dan maksimum
    a = float(input("Masukkan nilai minimum: "))
    b = float(input("Masukkan nilai domain: "))
    c = float(input("Masukkan nilai maksimum: "))
    x = float(input("Masukkan nilai derajat keanggotaan: "))
    
    # Generate values for the x-axis
    x_values = np.linspace(a, c, 100)
    
    # Generate corresponding y values using the kurvaSegitiga function
    y_values = [kurvaSegitiga(a, b, c, x) for x in x_values]
    
    # Calculate the membership degree for the provided x value
    membership_degree = kurvaSegitiga(a, b, c, x)

    # Print result
    print("Nilai derajat keanggotaan: ", membership_degree)

    
    # Visualize the membership function
    plt.figure(figsize=(12, 8))
    plt.plot(x_values, y_values, 'b', linewidth=1.5, label='Kurva Segitiga')
    plt.plot(x, membership_degree, 'ro', markersize=10, label='Nilai derajat keanggotaan')
    plt.vlines(x, 0, membership_degree, linestyle='dashed')
    plt.hlines(membership_degree, 0, x, linestyle='dashed')
    plt.legend(loc='best')
    plt.show()

if __name__ == "__main__":
    main()