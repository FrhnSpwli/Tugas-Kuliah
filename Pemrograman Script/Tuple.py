#Intruction 1,2,3
MyTuple = ("Red", "Blue", "Green")
print(MyTuple)
print()
#Intruction 4
print(dir(MyTuple))
print()
#Intruction 5,6
MyTuple = MyTuple.__add__(("Purple",))
print(MyTuple)
print()
#Intruction 7,8,9,10
MyTuple = MyTuple.__add__(("Yellow", ("Orange", "Black")))
print(MyTuple[4])
print(MyTuple[5])
print(MyTuple[5][0])
print()



