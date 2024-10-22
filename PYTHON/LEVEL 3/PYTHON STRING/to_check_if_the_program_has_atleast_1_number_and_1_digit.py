a=input("Enter a string: ")
count_num=0
count_val=0
for i in a:
    if(i.isalpha()):
        count_num+=1
    if(i.isdigit()):
        count_val+=1
if(count_val>0 and count_num>0):
    print("True")
else:
    print("False")
