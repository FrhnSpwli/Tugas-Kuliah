# Kurva Linear Naik dan Turun

# Kurva Linear Naik
# 0, x <= a
# (x-a)/(b-a), a <= x <= b
# 1, x >= b

# Kurva Linear Turun
# (b-x)/(b-a), a <= x <= b
# 0, x >= b

# a = nilai minimum
# b = nilai maksimum
# x = nilai derajat keanggotaan

# Import Library
import numpy as np
import matplotlib.pyplot as plt

# Fungsi Kurva Linear Naik
def kurvaLinearNaik(a, b, x):
    if (x <= a):
        return 0
    elif (x >= b):
        return 1
    else:
        return (x-a)/(b-a)
    
# Fungsi Kurva Linear Turun
def kurvaLinearTurun(a, b, x):
    if (x <= a):
        return 1
    elif (x >= b):
        return 0
    else:
        return (b-x)/(b-a)
    
# Fungsi Main
def main():
    print("Pilih Kurva Linear")
    print("1. Naik")
    print("2. Turun")
    pilih = int(input("Pilih: "))

    #Tanyakan nilai minimum dan maksimum
    a = float(input("Masukkan nilai minimum: "))
    b = float(input("Masukkan nilai maksimum: "))
    x = float(input("Masukkan nilai derajat keanggotaan: "))
    

    if pilih == 1:
        # Generate values for the x-axis
        x_values = np.linspace(a, b, 100)
        
        # Generate corresponding y values using the kurvaLinearNaik function
        y_values = [kurvaLinearNaik(a, b, x) for x in x_values]
        
        # Calculate the membership degree for the provided x value
        membership_degree = kurvaLinearNaik(a, b, x)
        
        # Find the index of the x value in the x_values array
        x_index = np.argmin(np.abs(x_values - x))
        
        # Get the corresponding y value
        y_at_x = y_values[x_index]
        
        # Plot the generated curve
        plt.plot(x_values, y_values, label="Kurva Linear Naik")
        plt.axvline(x, color='r', linestyle='--', label=f'x = {x}')
        plt.scatter(x, y_at_x, color='r')
        plt.annotate(f'({x}, {y_at_x:.2f})', (x, y_at_x), textcoords="offset points", xytext=(0,10), ha='center')\
        
    elif pilih == 2:
        # Generate values for the x-axis
        x_values = np.linspace(a, b, 100)
        
        # Generate corresponding y values using the kurvaLinearTurun function
        y_values = [kurvaLinearTurun(a, b, x) for x in x_values]
        
        # Calculate the membership degree for the provided x value
        membership_degree = kurvaLinearTurun(a, b, x)
        
        # Find the index of the x value in the x_values array
        x_index = np.argmin(np.abs(x_values - x))
        
        # Get the corresponding y value
        y_at_x = y_values[x_index]
        
        # Plot the generated curve
        plt.plot(x_values, y_values, label="Kurva Linear Turun")
        plt.axvline(x, color='r', linestyle='--', label=f'x = {x}')
        plt.scatter(x, y_at_x, color='r')
        plt.annotate(f'({x}, {y_at_x:.2f})', (x, y_at_x), textcoords="offset points", xytext=(0,10), ha='center')\

    else:
        print("Pilihan tidak valid.")

    # Display the membership degree value
    print(f"Membership degree at x = {x}: {membership_degree}")

    # Add labels and legend to the plot
    plt.title("Kurva Linear")
    plt.xlabel("x")
    plt.ylabel("y")
    plt.legend()
    plt.show()
        
if __name__ == "__main__":
    main()
