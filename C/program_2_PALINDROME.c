#include<stdio.h>
#include<string.h>
#include<ctype.h>
# define q 100
int main()
{
    char string_1[q],ch;
    int count=0,ch_temp;
    while(1)
    {
        ch=getchar();
        if(ch=='\n')
        {
            break;
        }
        if(ch==' ')
        {
            continue;
        }
        if(isupper(ch))
        {
            ch_temp=(int)ch;
            ch_temp+=32;
            ch=(char)ch_temp;  
        }
        string_1[count]=ch;
        count++;
    }
    string_1[count]='\0';
    int arr_1[q],arr_rev[q],size=count;
    for(int i=0;i<size;i++)
    {
        arr_1[i]=(int)string_1[i];
    }
    int temp=size;
    for(int i=0;i<size;i++)
    {
        arr_rev[temp-1]=arr_1[i];
        temp--;
    }
    count=0;
    for(int i=0;i<size;i++)
    {
        if(arr_1[i]==arr_rev[i])
        {
            count++;
        }
    }
    if(count==size)
    {
        printf("Password is Vulnerable");
    }   
    else{
        printf("Password is Non-Vulnerable");
    }
}