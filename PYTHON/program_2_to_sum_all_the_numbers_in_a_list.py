def main():
    a=[0]*5
    print("Enter 5 numbers to add")
    print("----------------------")
    for i in range(len(a)):
        a[i]=int(input("Enter val {}: ".format(i+1)))
    b=sum(a)
    print("The sum of the numbers is: ",b)
    continue_prompt=input("Do you want to continue again(yes/no): ")
    if continue_prompt.lower()=="yes":
        print("=========================================================================================")
        main()
    else:
        print("Program exited")
    
if __name__=="__main__":
    main()