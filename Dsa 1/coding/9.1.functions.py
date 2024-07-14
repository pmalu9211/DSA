# #some other theory related to the function

# def hello():
#     print("Hello")

# print(hello) # Will print the address of the funtion in the computer

# hi = hello
# hi() #Will do the same thing as the hello function when called

# say = print
# say("Hello world")

# ## Higher order function : where the function accepts or returns a function

# def upper(text):
#     print(text.upper())


# def ok(fun):
#     fun("This is Great")

# ok(upper)

def a(y):
    def b(x):
        return x*y
    return b
 
g = a(10)
print(g(9))
# print(a(10)(9))

### Lambda function
# add = lambda x,y: x+y
# print(add(4,5))

# age_check = lambda x: True if x >= 18 else False

# print(age_check(33))

