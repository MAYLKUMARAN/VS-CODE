#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%[^\n]",a);
    int size=strlen(a);
    for(int i=0;a[i]!='\0';i++)
    {
        b[size-1-i]=a[i];
    }
    for(int i=0;b[i]!=0;i++)
    {
        if(i%2!=0)
        {
            printf("%c",b[i]);
        }
    }
}