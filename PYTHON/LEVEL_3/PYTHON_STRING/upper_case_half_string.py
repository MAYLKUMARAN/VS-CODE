a=input("Enter a string: ")
halfsize=len(a)//2
len1=0
for i in a:
    if(len1>=halfsize):
        print(i.upper(),end='')
        len1+=1
    else:
        print(i,end='')
        len1+=1