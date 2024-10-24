a=input("Enter a string: ")
string=[]
palindrome=[]
size=len(a)
for i in range(size):
    for j in range(i+1,size+1):
        string.append(a[i:j])
for i in string:
    if i==i[::-1]:
        palindrome.append(i)
# print(palindrome)
maxi=int(1)
for i in palindrome:
    if int(len(i))>maxi:
        maxi=int(len(i))
for i in palindrome:
    if len(i)==maxi:
        print(i)
