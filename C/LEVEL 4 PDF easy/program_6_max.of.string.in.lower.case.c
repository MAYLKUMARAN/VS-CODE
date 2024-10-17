#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char stringa[100],ch;
    int i=0,count=0,dupe_val[100],max=0;
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
        }
        stringa[i]=ch;
        i++;
    }
    for (i=0;stringa[i]!='\0';i++)
    {
        for(int j=0;stringa[j]!='\0';j++)
        {
            if(stringa[i]==stringa[j])
            {
                count++;
            }
        }
        dupe_val[i]=count;
        count=0;
    }
    for(int i=0;i<strlen(stringa);i++)
    {
        if(max<dupe_val[i])
        {
            max=dupe_val[i];
        }
    }
    printf("%c\n",stringa[max-1]);
}