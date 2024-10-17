#include<stdio.h>
#include<string.h>
void print(char a[])
{
    int size=strlen(a);
    for(int i=size-1;i>=0;i--)
    {
        if(i%2==0)
        {
            printf("%c",a[i]);
        }
    }
    printf("\n");
}
int main()
{
    char c[100][100],a[100];
    int b;
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        scanf("%s",c[i]);
    }
    for(int i=0;i<b;i++)
    {
        if(i%2==0)
        {
            strcpy(a,c[i]);
            print(a);
        }
    }
}
