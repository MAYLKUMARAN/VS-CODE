#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int b[100]={0};
    scanf("%[^\n]",a);
    int size=strlen(a);
    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=0;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                b[i]++;
            }
        }
    }
    for(int i=0;i<=size-1;i++)
    {
    if(b[i]==1)
    {
        printf("%c",a[i]);
    }
    }
}