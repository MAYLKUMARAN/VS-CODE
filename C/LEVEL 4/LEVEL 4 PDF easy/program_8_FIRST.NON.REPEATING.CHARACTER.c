#include<stdio.h>
#include<string.h>
int main()
{
    char stringa[100];
    int dupe_val[100]={0};
    scanf("%[^\n]",stringa);
    for(int i=0;stringa[i]!='\0';i++)
    {
        for(int j=0;stringa[j]!='\0';j++)
        {
            if(stringa[i]==stringa[j])
            {
                dupe_val[i]++;
            }
        }
    }
    for(int i=0;i<strlen(stringa);i++)
    {
        if(dupe_val[i]==1)
        {
            printf("least occuring first character in the string is %c\n",stringa[i]);
            return 0;
        }
    }
}