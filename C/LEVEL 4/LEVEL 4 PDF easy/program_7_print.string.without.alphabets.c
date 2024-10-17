#include<stdio.h>
#include<string.h>
int main()
{
    char string[100],ch;
    int i=0;
    while(1)
    {
        ch=getchar();
        if(ch=='\n')
        {
            break;
        }
        if((int)ch>=65 && (int)ch<=90 || (int)ch>=97 && (int)ch<=122)
        {
            continue;
        }
        string[i]=ch;
        i++;
    }
    printf("%s",string);
}