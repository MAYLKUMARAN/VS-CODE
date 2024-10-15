#include<stdio.h>
#include<string.h>
#define q 100
int main()
{
    char string1[q],open_bracket[q],last_open_bracket;
    fgets(string1,q,stdin);
    int size=strlen(string1)-1,count=0;
    for(int i=0;i<size;i++)
    {
        if(string1[i]=='('||string1[i]=='['||string1[i]=='{'||string1[i]==')'||string1[i]==']'||string1[i]=='}')  
        {     
            if(string1[i]=='('||string1[i]=='['||string1[i]=='{')
            {
                open_bracket[count]=string1[i];
                count++;
            }
            else if(string1[i]==')'||string1[i]==']'||string1[i]=='}')
            {  
                if(count>0)
                {
                    last_open_bracket=open_bracket[count-1];
                    if(string1[i]==')'&& last_open_bracket=='('||
                    string1[i]==']'&& last_open_bracket=='['||
                    string1[i]=='}'&& last_open_bracket=='{')
                    {
                        count--;
                    }
                    {

                    }
                }
            }
        }
        else
        {
            printf("false");
            return 0;
        }
    }
    if(count==0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}