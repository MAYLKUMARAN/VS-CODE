def add(a,b):
    return a+b
def product(a,b):
    return a*b
def main():
    a=int(input("Enter the first number: "))
    b=int(input("Enter the second number: "))
    print("The sum of the numbers is: ",add(a,b))
    print("The product of the numbers is: ",product(a,b))
    print("-----------------------------------------------")
    main()
if __name__=="__main__":
    main()
    