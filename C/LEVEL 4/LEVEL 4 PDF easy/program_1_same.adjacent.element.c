#include<stdio.h>
#include<string.h>
#define q 100
int main()
{
    char string1[q];
    fgets(string1,q,stdin);
    int size=strlen(string1),sum=0;
    if(string1[size-1]=='\n')
    {
        string1[size-1]=='\0';
        size--;
    }
    for(int i=0;i<size-1;i++)
    {
        if(string1[i]==string1[i+1])
        {
            printf("2");
            sum+=2;
        }
        else
        {
            printf("1");
            sum+=1;
        }
    }
    printf("\n%d",sum*sum);
}
