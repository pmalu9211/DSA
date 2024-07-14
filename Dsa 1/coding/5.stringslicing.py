#slicing = part of the string 
#[start(inclusive):stop(exclusive):step]
a = "hello World from the other side"

print(a[:0])
print(a[0])
print(a[-1::-1])
print(a[::2])
#we can define a slice function for particular slicing
aaba = slice(7,-4)
web = "http://google.com"
web2 = "http://pornhub.com"
print(web[aaba])
print(web2[aaba])
print(web.find("."))
print(web[0:-1])