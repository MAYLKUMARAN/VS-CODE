def add(a=0,b=0):#since assigning 0 to the parameters i am avoiding the error as it has a value(default arguments)
    return a+b
def product(a,b):#even though i mention the parameters in order the value is passed as per the arguments and thus parameter a= argument b and paramter b=argument a(positional arguments)
    return a*b 
def diffrence(a,b):#even though i gave wrong order of values for subtraction, the value turns positive because i changed the order while passing(keyword arguments)
    return a-b
def main():
    a=int(input("Enter number 1(small): "))
    b=int(input("Enter number 2(big): "))
    print(add(a))#but it doesn't add the value becuase i didn't send the value of b and it takes default value from the value assigned form the parameters of the function
    print(product(b,a))
    print(diffrence(a=b,b=a))
    print("-------------------------------------------------------------------")
    main()
if __name__=="__main__":
    main()