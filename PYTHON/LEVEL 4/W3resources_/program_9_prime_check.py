def prime_check(num):
    if num < 2:
        return False
    for i in range(2,num):
        if(num%i==0):
            return False
        else:
            continue
    return True

def main():
    a=int(input("enter a number for prime check: "))
    if(prime_check(a)):
        print("Prime")
    else:
        print("Not prime")
    continue_prompt=input("Do you want to continue again(yes/no): ")
    if continue_prompt.lower()=="yes":
        print("=========================================================================================")
        main()
    else:
        print("Program exited")
        
if __name__=="__main__":
    main()