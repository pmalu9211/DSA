list = ["apple","Apple","Samm", "samsung","xiomi", "poco","blackberry"]
#list functions
list.append("Nokia")
print(list)
for l in list:
    print(l)
list.insert(0,"Oppo")
print(list)
list.remove("xiomi")
print(list)
# list.clear()
print(list)
list.sort()
print(list)
if "apple" in list:
    print("Hello")



#  #2D list = list of lists


# camera = ["mp", "lense", "radius"]
# battery = ["Power", "material", "durability"]
# mobile = [camera,battery]
# print(mobile)
# for i in mobile:
#     print(i)
# print(mobile[1][1])
# print(mobile[0])



# #tuple they are ordered and unchangable


# student = ("Prathamesh", "Aditya")
# print(student.count("Aditya"))
# print(student.index("Aditya"))



# #set = collection which is unordered unindexed,no duplicate copy


# #the order get changed even after few times running the code but it is faster than list
# set = {"fork", "spoom", "knife"}
# print(set)
# set.add("napkin")
# set.remove("fork")
# dishes = {"bowl", "palte","cup"}
# set.update(dishes)
# print(set)

# megaset = set.union(dishes)
# print(set.difference(dishes))



# #dictionary = Changable, unordered, key:value pair


# capitals = {"india": "newdelhi",
#             "usa" : "washington",
#             "china": "Beijing"}
# print(capitals["china"])
# print(capitals.get("germany"))
# print(capitals.keys())
# print(capitals.values())
# print(capitals.items())
# for key,value in capitals.items():
#     print(key,value)
# capitals.update({"germany": "Berlin"})
# print(capitals)
# capitals.update({"india":"Latur"})
# print(capitals)
# capitals.pop("india")
# print(capitals)

