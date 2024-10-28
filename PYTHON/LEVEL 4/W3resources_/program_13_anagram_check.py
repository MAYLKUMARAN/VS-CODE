def change(a):
    a=a.replace(' ','')
    a=a.casefold()
    a=list(a)
    a.sort()
    return a

def main():
    a=input("Enter a string: ")
    b=input("Enter a string: ")
    if(len(a)==len(b)):
        a=change(a)
        b=change(b)
        count=0
        if(a==b):
            print("anagram")
        else:
            print("not anagram")
    else:
        print("not anagram")
    continue_prompt=input("Do you want to continue again(yes/no): ")
    if continue_prompt.lower()=="yes":
        print("=========================================================================================")
        main()
    else:
        print("Program exited")
        
if __name__=="__main__":
    main()