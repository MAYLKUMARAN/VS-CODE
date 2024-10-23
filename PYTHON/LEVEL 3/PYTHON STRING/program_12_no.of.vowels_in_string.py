a=input("Enter the string: ")
vowels="aeiou"
a=a.lower()
count=0
for i in a:
    if i in vowels:
        count+=1
print(count)