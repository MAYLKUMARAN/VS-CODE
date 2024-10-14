#include<stdio.h>
#include<string.h>
int main()
{
    char string_1[100],string_rev[100];
    fgets(string_1,100,stdin);
    int rev_count=strlen(string_1);
    for (int i=0;i<strlen(string_1);i++)
    {
        string_rev[rev_count]=string_rev[i];
        rev_count--;
    }
    printf("%s",string)
}