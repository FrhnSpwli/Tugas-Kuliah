#Insertion Sort
print("=============================")
print("       Insertion Sort")
print("=============================")


def insertion_sort(a):
    for j in range(2, len(a)):
        i = 1
        while a[j] > a[i]:
            i += 1
        m = a[j]
        for k in range(j, i, -1):
            a[k] = a[k - 1]
        a[i] = m
        print(a)
    return a

a = [2, 3, 11, 10, 7, 9, 14, 16, 1]
print("Kondisi Awal")
print(a)
print("Proses Pengurutan")
sorted_a = insertion_sort(a)
print("Hasil Pengurutan")
print(sorted_a)


print("==============================")
print("Greedy Change Making Algorithm")
print("==============================")

def greedychange(c, n):
    r = len(c)
    d = [0] * r
    for i in range(r):
        d[i]= 0
        while n >= c[i]:
            d[i] += 1
            n -= c[i]
    return d

jeniscoins = [1, 5, 10, 25, 50]
c = jeniscoins[::-1]
n = 49
print("Koin yang tersedia")
print(c)
print("Jumlah Koin yang dibutuhkan")
print(greedychange(c, n))
