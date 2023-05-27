import math

#fungsi kuadrat rumus abc

def kuadrat(a,b,c):
    #mencari akar
    akar = math.sqrt(b**2 - 4*a*c)
    #mencari x1
    x1 = (-b + akar) / (2*a)
    #mencari x2
    x2 = (-b - akar) / (2*a)
    return x1, x2

a = float(input("Masukkan nilai a: "))
b = float(input("Masukkan nilai b: "))
c = float(input("masukkan nilai c: "))

x1, x2 = kuadrat(a,b,c)

print("x1 = ", x1)
print("x2 = ", x2)