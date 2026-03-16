import math

def add(x,y):
    return x+y
def subtract(x,y):
    return x-y
def multiply(x,y):
    return x*y
def divide(x,y):
    return x/y
def sqrt(x):
    return math.sqrt(x)
def mod(x,y):
    return x%y
    

oper = input("What operation would you like to do? (-,+,*,/,sqrt,%) ")
firstnum = float(input("What is the first number? " ))
if oper != "sqrt":
    secnum = float(input("What is the second number? "))


if oper == "-":
    print("Your result is " + str(subtract(firstnum, secnum)))
elif oper == "+":
    print("Your result is " + str(add(firstnum, secnum)))
elif oper == "*":
    print("Your result is " + str(multiply(firstnum, secnum)))
elif oper == "/":
    print("Your result is " + str(divide(firstnum, secnum)))
elif oper == "sqrt":
    print("Your result is " + str(sqrt(firstnum)))
elif oper == "%":
    print("Your result is " + str(mod(firstnum, secnum)))
else:
    print("Looks like you didn't pick a valid operation!")
