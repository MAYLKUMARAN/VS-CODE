a=input("Enter the string: ")
vowels='aeiou'
count=0
for i in a:
    if(i.isupper()):
        a=a.replace(i,i.lower())
for j in vowels:
    if j in a:
        count+=1
if(count==len(vowels)):
    print("True")
else:
    print("False")