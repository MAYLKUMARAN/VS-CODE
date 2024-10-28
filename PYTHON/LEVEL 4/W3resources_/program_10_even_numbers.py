def group(a):
    b=[]
    count=int(0)
    for i in a:
        if i%2==0:
            b.append(i)
        else:
            continue
    return b
def main():
    a=int(input("enter size of the list: "))
    lst=[0]*a
    for i in range(a):
        lst[i]=int(input("Enter value {}: ".format(i+1)))
    b=group(lst)
    print(b)
    continue_prompt=input("Do you want to continue again(yes/no): ")
    if continue_prompt.lower()=="yes":
        print("=========================================================================================")
        main()
    else:
        print("Program exited")
if __name__=="__main__":
    main()