#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int arr[100]={0};
    scanf("%[^\n]",a);
    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=0;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                arr[i]++;
            }
        }
    }
    int size=strlen(a);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
        printf("%c is the first non reapeating character",a[i]);
        }
    }
}