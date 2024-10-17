#include<stdio.h>
#include<string.h>
int main()
{
    char a[100][100],ch,b[100];
    int i=0,j=0;
    while(1)
    {
        ch=getchar();
        if(ch==' ')
        {
            a[i][j]='\0';
            i++;
            j=0;
        }
        if(ch=='\n')
        {
            a[i][j]='\0';
            break;
        }
        a[i][j]=ch;
        j++;
    }
    strcpy(b,a[0]);
    for(int k=strlen(b)-1;k>=0;k--)
    {
        printf("%c",a[0][k]);
    }
    strcpy(b,a[i]);
    printf(" ");
    for(int k=strlen(b)-1;k>=0;k--)
    {
        printf("%c",a[i][k]);
    }
}