#include<stdio.h>
#include<string.h>
int dupe(char b[],char a,int size)
{
    for(int i=0;i<size;i++)
    {
        if(b[i]==a)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char a[100],b[100];
    int count=0;
    scanf("%s",a);
    int size=strlen(a);
    for(int i=0;i<size-1;i++)
    {
        if(dupe(b,a[i],count))
        {
            b[count]=a[i];
            count++;
        }
    }
    printf("%s\n",b);
}