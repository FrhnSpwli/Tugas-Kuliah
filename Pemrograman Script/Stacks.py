MyStack = []
StackSize = 3

def DisplayStack():
    print("Stack currently contains: ")
    for Item in MyStack:
        print(Item)
    print()

def Push(Value):
    if len(MyStack) < StackSize:
        MyStack.append(Value)
    else:
        print("Stack is full!")
    
def Pop():
    if len(MyStack) > 0:
        MyStack.pop()
    else:
        print("Stack is empty!")

Push(1)
Push(2)
Push(3)
DisplayStack()
input("Press any key when ready")
Push(4)
DisplayStack()
input("Press any key when ready")
Pop()
DisplayStack()
input("Press any key when ready")
Pop()
Pop()
Pop()
DisplayStack()