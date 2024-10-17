#include<stdio.h>
int main()
{
    char string[100],dup_num[100],ch;
    int dup_val[100]={0},count=0;
    scanf("%[^\n]",string);
    for(int i=0;string[i]!='\0';i++)
    {
        count++;
        for(int j=0;string[j]!='\0';j++)
        {
            if(string[i]==string[j])
            {
                dup_val[i]++;
            }
        }
    }
    int max;
    for(int i=0;i<count;i++)
    {
        if(dup_val[i]>max)
        {
            max=dup_val[i];
        }
    }
    for(int i=0;i<count;i++)
    {
        if(max==dup_val[i])
        {
            ch=string[i];
        }
    }
    printf("%c\n",ch);
}