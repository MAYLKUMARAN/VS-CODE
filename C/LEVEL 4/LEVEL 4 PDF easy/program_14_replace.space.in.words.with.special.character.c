#include<stdio.h>
#include<string.h>
int main()
{
    char b,a[100],ch;
    fgets(a,100,stdin);
    int size=strlen(a);
    if(a[size-1]=='\n')
    {
        a[size-1]='\0';
    }
    scanf("%c",&b);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            printf("%c",b);
        }
        else
        {
            printf("%c",a[i]);
        }
    }
}