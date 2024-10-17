#include<stdio.h>
#include<string.h>
int main()
{
    char stringa[100],ch;
    scanf("%[^\n]",stringa);
    int count=0;
    for(int i=0;stringa[i]!='\0';i++)
    {
        ch=stringa[i];
        for(int j=0;stringa[j]!='\0';j++)
        {
            if(ch==stringa[j])
            {
                count++;
            }
        }
        if(count>1)
            {
                break;
            }
            count=0;
    }
    count=0;
    for(int i=0;stringa[i]!='\0';i++)
    {
        if(ch==stringa[i])
        {
            count++;
        }
    }
    printf("%c occurs %d times and is the first recurring letter",ch,count);
}