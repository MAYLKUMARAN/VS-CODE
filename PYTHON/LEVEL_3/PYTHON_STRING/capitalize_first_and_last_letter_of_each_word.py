a=input("Enter a string: ")
b=a.split()
c=""
for i in b:
    if(len(i)==1):
        c+=i.upper()+' '
    else:
        c+=i[0].upper()+i[1:-1:]+i[len(i)-1].upper()+' '
print(c)