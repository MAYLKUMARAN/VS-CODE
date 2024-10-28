def unique(a):
    return set(a)
def main():
    a=int(input("Enter the number of values to be stored in the array: "))
    arr=[0]*a
    for i in range(a):
        arr[i]=int(input("Enter a value to be stored: "))
    count=0
    b=list(unique(arr))
    b.sort()
    print(b)
    continue_prompt=input("Do you want to continue again(yes/no): ")
    if continue_prompt.lower()=="yes":
        print("=========================================================================================")
        main()
    else:
        print("Program exited")
if __name__=="__main__":
    main()