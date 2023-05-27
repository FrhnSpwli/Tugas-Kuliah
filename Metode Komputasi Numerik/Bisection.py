# def bisection(f, a, b, tol=1e-6, max_iter=100):
#     if f(a) * f(b) >= 0:
#         raise ValueError("f(a) * f(b) must be < 0")
    
#     for i in range(max_iter):
#         c = (a + b) / 2
#         if abs(f(c)) < tol:
#             return c
#         elif f(a) * f(c) <0:
#             b = c
#         else:
#             a = c

#     raise RuntimeError("Failed to converge")

# def f(x):
#     return x**2 - 2

# print(bisection(f, 1, 2))




galat = 0.001;
bawah = input("Batas Bawah: ");
atas = input("Batas Atas: ");
nilai = 1;
no = 0;
m0 = bawah;

print("Taksiran batas bawah: %5.3f\n", bawah);
print("Taksiran batas atas: %5.3f\n", atas);
print("=====================================================");
print("Iterasi (batas+atas)/2 Galat Interval");
print("=====================================================");
while nilai > galat:
    no = no + 1;
    fbawah = eval ('fbi', {bawah});
    m = (bawah + atas) / 2;
    ftengah = eval ('fbi', {m});
    if fbawah * ftengah == 0:
        print("Terdapat akar pada %5.3f\n", m);
        break;
    elif fbawah * ftengah < 0:
        atas = m;
    else:
        bawah = m;
    break;

nilai = abs(m - m0);
print("%3d %8.5f %8.5f [%8.5f %8.5f]\n", no, m, nilai, bawah, atas);
m0 = m;

print("=====================================================");
print("Pada iterasi ke-%d, Selisih interval < %5.3f\n", no, galat);
print("Jadi, akar persamaannya adalah %7.5f\n", m);
print("=====================================================");

def fbi(x):
    return x**3 + x**2 - 8*x - 10;



