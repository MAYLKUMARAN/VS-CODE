#include<stdio.h>
#include<string.h>
int main()
{
    char string_1[100],string_rev[100];
    fgets(string_1,100,stdin);
    int len=strlen(string_1),temp;
    if(string_1[len-1]=='\n')
    {
        string_1[len-1]='\0';
        len--;
    }
    temp=len;
    for(int i=0;i<len;i++)
    {
        if(string_1[i]==' ')
        {
            continue;
        }
        else
        {
        string_rev[temp-1]=string_1[i];
        temp--;
        }
    }
    printf("%s\n",string_rev);
    int count=0,len_rev=strlen(string_rev);
    for (int i=0;i<len;i++)
    {
    if(string_1[i]==string_rev[i])
    {
        count++;
    }
    }
    if(count==len_rev)
    {
        printf("Password is Vulnerable");
    }
    else
    {
        printf("Password is Non-Vulnerable");
    }
}