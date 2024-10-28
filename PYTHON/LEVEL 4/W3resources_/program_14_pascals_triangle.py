def fact(a):
    if a==0 or a==1:
        return 1
    sum=1
    for i in range(2,a+1):
        sum*=i
        a-=1
    return sum
def pascal(i,j):
    return fact(i)//(fact(i-j)*fact(j))
def main():
    a=int(input("Enter the size of the triangle: "))
    for i in range(a):
        for j in range(a-i+1):
            print(end=' ')
        for j in range(i+1):
            print(pascal(i,j),end=' ')
        print()
if __name__=="__main__":
    main()