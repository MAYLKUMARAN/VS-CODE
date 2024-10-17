#include<stdio.h>
int main()
{
    char stringa[100];
    scanf("%[^\n]",stringa);
    for(int i=0;stringa[i]!='\0';i++)
    {
        if(stringa[i]==' ')
        {
            printf("%%20");
        }
        else
        {
            printf("%c",stringa[i]);
        }
    }
}