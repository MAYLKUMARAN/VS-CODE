a=input("Enter string 1: ")
b=input("Enter string 2: ")
c=''
for i in a:
    if i in b:
        c+=i
print(len(c))