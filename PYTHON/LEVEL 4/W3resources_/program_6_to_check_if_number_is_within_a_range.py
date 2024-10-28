def check (a):
    b=int(input("enter the lower bound: "))
    c=int(input("enter the higher bound: "))
    if(a>=b and a<=c):
        print("Within bound")
    else:
        print("Not within bound")
        
def main():
    a=int(input("Enter a number to check if it's within a range: "))
    check(a)
    prompt=input("Do you wish to continue again(yes/no): ")
    if prompt.lower()=='yes':
        print("...........................................")
        main()
    else:
        print("Program exited")
if __name__=="__main__":
    main()