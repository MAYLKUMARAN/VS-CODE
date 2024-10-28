def main():
    a=input("Enter the string: \n")
    b=a.split("-")
    b.sort()
    print(b)
    print("-".join(b))
    continue_prompt=input("Do you want to continue again(yes/no): ")
    if continue_prompt.lower()=="yes":
        print("=========================================================================================")
        main()
    else:
        print("Program exited")
if __name__=="__main__":
    main()