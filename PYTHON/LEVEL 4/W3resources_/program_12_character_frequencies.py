def unduplicated(a):
    b=set(a)
    b=list(b)
    b.sort()
    return b

def main():
    a=input("Enter a string: \n")
    a=a.replace(' ','')
    for i in a:
        if i.isupper():
            a=a.replace(i,i.lower())
    b=unduplicated(a)
    frequency=[0]*len(b)
    count=0
    for i in b:
        for j in a:
            if i==j:
                frequency[count]+=1
        count+=1
    for i in range(len(b)):
        print("{} : {}".format(b[i],frequency[i]))
                
if __name__=="__main__":
    main()