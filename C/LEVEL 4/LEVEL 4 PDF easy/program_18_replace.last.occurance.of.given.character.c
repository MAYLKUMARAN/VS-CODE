#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b,c;
    int count=0,count1=0;
    fgets(a,100,stdin);
    int size=strlen(a);
    if(a[size-1]=='\n')
    {
        a[size-1]='\0';
    }
    scanf(" %c",&b);
    scanf(" %c",&c);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==b)
        {
            count++;
        }
    }
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==b)
        {
        count1++;
        }
        if(a[i]==b && count1==count)
        {
            a[i]=c;
        }
    }
    printf("%s",a);
}