a=input("Enter a string: ")
a=a.replace(' ','')
for i in a:
    if i.isupper():
        a=a.replace(i,i.lower())
print(a)
if a==a[::-1]:
    print("palindrome")
else:
    print("NOt")