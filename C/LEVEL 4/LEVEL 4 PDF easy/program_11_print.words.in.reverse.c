#include<stdio.h>
int main()
{
    char ch,a[100][100];
    int i,j;
    while(1)
    {
        ch=getchar();
        if(ch=='\n')
        {
            a[i][j]='\0';
            break;
        }
        if(ch==' ')
        {
            a[i][j]='\0';
            i++;
            j=0;
            continue;
        }
        a[i][j]=ch;
        j++;
    }
    for(int k=0;k<=i;k++)
    {
        printf("%s ",a[i-k]);
    }
}