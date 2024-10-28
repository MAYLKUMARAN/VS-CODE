def reverse(a):
    return a[::-1]
def main():
    a=input("enter a string to reverse:\n")
    a=reverse(a)
    print(a)
    continue_prompt=input("Do you want to continue again(yes/no): ")
    if continue_prompt.lower()=="yes":
        for i in range(len(a)*2):
            print("".join('='),end='')
        print('\n')
        main()
    else:
        print("Program exited")
if __name__=="__main__":
    main()