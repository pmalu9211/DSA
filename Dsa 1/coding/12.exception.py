# #to avoid the code to stop completely we use exception 
# #by using the exception we can try if the values provided by the
# #user are able to produce a valid result or produce an error.

# try:
#     def div(x,y):
#         return x/y
#     a = int(input("Numerator"))
#     b = int(input("denominator"))
#     print(div(a/b))
# except ZeroDivisionError:
#     print("you cannot divide number by zero")
# except ValueError:
#     print("Divide by a number")
# except Exception:
#     print("An unknown error occured")

try:
    numer = int(input("numer : "))
    dino = int(input("dino : "))
    result = numer/dino
except ZeroDivisionError as e:
    print(e)
    print("No zero division here")
except ValueError as e :
    print(e)
    print("give some numbers")
except Exception as e:
    print(e)
    print("a new exception occored")
else:
    print(result)
