# #for list

#tupil = ["Tejas","Ayush","Tanmay","Pratham"]
# list.sort()
# print(list)

# #tupil

#tupil = ("Tejas","Ayush","Tanmay","Pratham")
# tuple1 = sorted(tupil,reverse=True)
# print(tuple1)

# students = [("Squidward","F",60),("Sandy","A",33),("Patrik","D",36)]

# key = lambda fun:fun[2]
# tupil.sort(key=key)
# print(tupil)

#filter 
#filter(function, iterable)

# friends = [("Man",19),
#            ("women",12),
#            ("gay",100)]

# age = lambda data : data[1] >= 18

# a = list(filter(age,friends))

# print(a)

# #reduce()
# #apply the function to the first two element of the iterable and reduce it to a single value till only one value is remaining 

# import functools

# num = [5,4,3,2,1]
# factorial = functools.reduce(lambda x,y : x*y,num)
# print(factorial)

# #list comprehension
# squares = [i * i for i in range(1,11)]
# print(squares)

# aa = [i for i in squares if i >= 60]
# print(aa)

# #dictionary comprension
# #dictionary = {key: expression for (key,value) in iterable}

# far = {'New york':32, 'Bosten':75, 'LA': 100}
# deg = {city : round((temp-32)*(5/9)) for (city,temp) in far.items()}
# print(deg)

# ok = {city : ("warm" if temp >= 40 else "cold") for (city,temp) in deg.items()}
# print(ok)

#zip object

username = ["Dude","Bro","Mister"]
password = ("password", "1234", "guesr")
date = ("11","12","22")
user = dict(zip(username,password))

print(user)

for i in user:
    print(i)

