#include<stdio.h>
#include<string.h>
int main()
{
    char string[100][100],ch;
    int i=0,j=0;
    while(1)
    {
        ch=getchar();
        if(ch=='\n')
        {
            string[i][j]=='\0';
            break;
        }
        else if(ch==' ')
        {
            string[i][j]=='\0';
            i++;
            j=0;
        }
        else
        {
            string[i][j]=ch;
            j++;
        }
    }
    for(int k=0;k<=i;k++)
    {
        if(k%2==0)
        {
        printf("%s\n",string[k]);
        }
    }

}