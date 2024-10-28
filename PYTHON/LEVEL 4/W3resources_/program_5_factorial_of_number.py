def fact(a):
    b=1
    for i in range(1,a+1):
        b*=i
    return b
def main():
    a=input("enter a number to find it's factorial: ")
    b=0
    if(a.isdigit()):
        a=int(a)
        b=fact(a)
        print("The factorial is: ",b)
        continue_prompt=input("Do you want to continue again(yes/no): ")
        if continue_prompt.lower()=="yes":
            print("=====================")
            main()
        else:
            print("Program exited")
    else:
        print("Invalid input!!!")
        print("================")
        main()
if __name__=="__main__":
    main()