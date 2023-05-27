#Intruction 1,2
Colors = {"Sam" : "Blue", "Amy" : "Red", "Sarah" : "Yellow"}
print(Colors)
print()

#Intruction 3
print(Colors["Sarah"])
print()

#Intruction 4
print(Colors.keys())
print()

#Intruction 5
for Item in Colors.keys():
    print("{0} likes the color {1}".format(Item, Colors[Item]))
print()

#Intruction 6
Colors["Sarah"] = "Purple"

#Intruction 7
Colors.update({"Harry" : "Orange"})

#Intruction 8,9
for name, color in Colors.items():
    print("{0} likes the color {1}".format(name, color))
print()

#Intruction 10
del Colors["Sam"]

#Intruction 11
for name, color in Colors.items():
    print("{0} likes the color {1}".format(name, color))
print()

#Intruction 12
print(len(Colors))
print()

#Intruction 13
print(Colors.clear())
print()

#Intruction 14
print(len(Colors))
print()