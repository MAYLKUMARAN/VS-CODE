a=input()
substring=[]
size=len(a)
for i in range(size):
    for j in range(i+1,size+1):
        substring.append(a[i:j])
print(substring)