#Insertion Sort
print("=============================")
print("       Insertion Sort")
print("=============================")

a = [2, 3, 11, 10, 16, 14]
print("Kondisi Awal")
print(a)
print("Proses Pengurutan")
for j in range(2, len(a)):
    i = 0
    while a[j] > a[i]:
        i += 1
    m = a[j]
    for k in range(j, i, -1):
        a[k] = a[k - 1]
    a[i] = m
    print(a)
print("Hasil Pengurutan")
print(a)
