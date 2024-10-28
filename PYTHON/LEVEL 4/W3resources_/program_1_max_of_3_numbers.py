def get_input():
   return  int(input("Enter a number to compare: "))
    
def compare(a,b,c):
    if a>b and a>c:
        print("THE GREATEST NUMBER IS: ",a)
    elif b>a and b>c:
        print("THE GREATEST NUMBER IS: ",b)
    else:
        print("THE GREATEST NUMBER IS: ",c)
    
def main():
    a=0
    b=0
    c=0
    a=get_input()
    b=get_input()
    c=get_input()
    compare(a,b,c)
    continue_prompt=input("Do you want to continue again(yes/no): ")
    if continue_prompt.lower()=="yes":
        print("=========================================================================================")
        main()
    else:
        print("Program exited")
if __name__=='__main__':
    main()