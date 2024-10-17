#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char string[100][100],ch;
    int i=0,j=0;
    while(1)
    {
        ch=getchar();
        if(ch=='\n')
        {
            string[i][j]='\0';
            break;
        }
        if(isupper(ch))
        {
            ch=tolower(ch);
        }
        if(ch==' ')
        {
            string[i][j]='\0';
            i++;
            j=0;
            continue;
        }
        string[i][j]=ch;
        j++;
    }
    for(int k=0;k<=i;k++)
    {
        string[k][0]=toupper(string[k][0]);
    }
    for(int k=0;k<=i;k++)
    {
        printf("%s ",string[k]);
    }
}