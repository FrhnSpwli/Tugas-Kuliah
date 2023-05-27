print("Enter Your Age: ")
age = int(input())

if age >= 18:
    print("You are old enough to drive")
else:
    print("You are not old enough to drive")
    print("You will be able to drive after", 18 - age, "years")