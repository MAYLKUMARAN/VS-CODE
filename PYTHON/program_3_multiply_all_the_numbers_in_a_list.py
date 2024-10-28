def multiply(a,b):
    return a*b

def main():
    a=[0]*5
    b=1
    for i in range(len(a)):
        a[i]=int(input("Enter val to multiply: "))
    for i in a:
        b=multiply(i,b)
    print("The product of the numbers is: ",b)
    continue_prompt=input("Do you want to continue again(yes/no): ")
    if continue_prompt.lower()=="yes":
        print("=========================================================================================")
        main()
    else:
        print("Program exited")
if __name__=="__main__":
    main()