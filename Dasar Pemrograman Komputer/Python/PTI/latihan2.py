print("Andi Farhan Sappewali (D121211078)")
print("Simple Calculator\n")

print("Masukkan angka:")
num1 = int(input())
print("Masukkan operasi bilangan (misalnya +, -, x, :)")
operator = input()
print ("Masukkan angka:")
num2 = int(input())

if operator == "+":
    print("Hasil penjumlahan")
    print(int(num1) + int(num2))
elif operator == "-":
    print("Hasil pengurangan")
    print(int(num1) - int(num2))
elif operator == "x":
    print("Hasil perkalian")
    print(int(num1) * int(num2))
elif operator == ":":
    print("Hasil pembagian")
    print(int(num1) / int(num2))
else:
    print("Operator tidak valid (Masukkan operasi bilangan +, -, x, :)")
