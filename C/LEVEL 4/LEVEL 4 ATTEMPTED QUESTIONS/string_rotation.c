#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],temp;
    int count=1;
    scanf("%[^\n]",a);
    scanf("%d",&count);
    int size=strlen(a)-1;
    for(int j=0;j<count;j++)
    {
    for(int i=0;i<=size-1;i++)
    {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
    }
    }
    printf("%s",a);
}