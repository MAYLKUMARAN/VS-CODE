#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check_dupe(char str[100][100],char string[100],int count)
{
    char ch;
    for(int i=0;i<count;i++)
    {
        
        if(strcmp(str[i],string)==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char ch,a[100][100],str[100][100],string[100];
    int row=0,col=0,count=0;
    while(1)
    {
        ch=getchar();
        if(ch=='\n')
        {
            a[row][col]='\0';
            break;
        }
        if(ch==' ')
        {
            a[row][col]='\0';
            row++;
            col=0;
            continue;
        }
        if(isupper(ch))
        {
            ch=tolower(ch);
        }
        a[row][col]=ch;
        col++;
    }
    for(int i=0;i<row;i++)
    {
        strcpy(string, a[i]);   
        if(check_dupe(str,string,count))
        {
            strcpy(str[count],a[i]);
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
    printf("%s ",str[i]);
    }
}