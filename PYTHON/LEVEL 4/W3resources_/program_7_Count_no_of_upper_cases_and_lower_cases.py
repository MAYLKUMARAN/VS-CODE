def check(a):
    up=int(0)
    low=int(0)
    for i in a:
        if i.isupper():
            up+=1
        elif i.islower():
            low+=1
    print("no of uppercase: ",up)
    print("no of lowercase: ",low)

def main():
    a=input("enter a string: ")
    size=len(a)
    check(a)
    prompt=input("Do you wish to continue again(yes/no): ")
    if prompt.lower()=='yes':
        print("...........................................")
        main()
    else:
        print("Program exited")
    
    
            
if __name__=='__main__':
    main()