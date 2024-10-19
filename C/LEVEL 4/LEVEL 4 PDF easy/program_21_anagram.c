#include<stdio.h>
#include<string.h>
#include<ctype.h>
void count(char str[],char str2[],int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(str[i]==str2[j])
            {
                arr[i]++;
            }
        }
    }
}
int input(char str[],int i)
{
    char ch;
    while(1)
    {
        ch=getchar();
        if(ch=='\n')
        {
            str[i]='\0';
            break;
        }
        str[i]=ch;
        i++;
    }
    return i;
}
int main()
{
    char str[100],str2[100];
    int i=0,j=0;
    int a[100]={0},b=0;
    i=input(str,i);
    j=input(str2,j);
    if(i==j)
    {
        count(str2,str,a,i);
    }
    for(int k=0;k<i;k++)
    {
        if(a[k]<1)
        {
            b++;
        }
    }
    if(b==0)
    {
        printf("hi");
    }
    else
    {
        printf("bye");
    }
}