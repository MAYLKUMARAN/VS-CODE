def average(a):
    avg=0
    for i in range(len(a)):
        avg+=a[i]
    avg/=len(a)
    return avg
def grades(avg):
    if avg>=80:
        print("GRADE A")
    elif avg<80 & avg >=60:
        print("GRADE B")
    elif avg<60 & avg >=50:
        print("GRADE C")
    elif avg<50:
        print("GRADE F")
    print("\n-------------------------------------------------------------------------------")
    main()
    
def main():
    print("Enter the marks of all the subjects")
    a=[0]*5
    for i in range (0,5):
        a[i]=int(input("Enter the mark of subject {}: ".format(i+1)))
    avg=average(a)
    print("Your average is: ",avg)
    grades(avg)

if __name__=="__main__":
    main()