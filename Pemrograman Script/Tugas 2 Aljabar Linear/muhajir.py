import numpy as np

print("x  + 3y - 2z = 9")
print("2x + 3y - 2z = 11")
print("2x + 1y - z  = 6")
a = np.array([[1,3,2],[2,3,2],[2,1,1]])
b = np.array([9,11,6])
A = np.concatenate((a, b[:,None]), axis=1) 
print("A=\n",A,sep="\n")

A[1,:]=A[1,:]- 2*A[0,:]
print("A1=",A,sep="\n")

A[2,:]=A[2,:]- 2*A[0,:]
print("A2=",A,sep="\n")

A[1,:]=A[2,:]* -1/3
print("A3=",A,sep="\n")

A[2,:]=A[2,:]+ 5*A[1,:]
print("A4=",A,sep="\n")

A[2,:]=A[2,:]*1/2
print("A5=",A,sep="\n")

C = np.linalg.solve(a, b)
print("Solve (x,y,z):",C)