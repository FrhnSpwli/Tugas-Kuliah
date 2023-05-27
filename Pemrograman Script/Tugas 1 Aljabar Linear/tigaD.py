#ALJABAR LINEAR C
#Andi Farhan Sappewali
#D121211078

import numpy as np

A = np.array([[2,4],[3,5]])
print("matriks A :\n", A)
I = np.array([[1,0],[0,1]])
print("matriks I :\n", I,"\n")

AI = np.dot(A,I)
IA = np.dot(I,A)
print("AI :\n", A, "\n*\n", I, "\n=\n", AI, "\n")
print("IA :\n", I, "\n*\n", A, "\n=\n", IA)