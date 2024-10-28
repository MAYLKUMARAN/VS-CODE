def substrings(a):
    b=[]
    for i in range(len(a)):
        for j in range(i+1,len(a)+1):
            b.append(a[i:j])
    return b

def main():
    a=input("enter the string: \n")
    a=a.replace(' ','')
    b=substrings(a)
    print(b)
    continue_prompt=input("Do you want to continue again(yes/no): ")
    if continue_prompt.lower()=="yes":
        print("=========================================================================================")
        main()
    else:
        print("Program exited")
        
if __name__=="__main__":
    main()