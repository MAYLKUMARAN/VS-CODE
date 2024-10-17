#include<stdio.h>
#include<string.h>
#include<ctype.h>
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
        if(isupper(ch))
        {
            ch=tolower(ch);
            string[i]=ch;
            i++;
            continue;
        }
        else if(islower(ch))
        {
            ch=toupper(ch);
            string[i]=ch;
            i++;
            continue;
        }
        string[i]=ch;
        i++;
    }
    printf("%s",string);
}