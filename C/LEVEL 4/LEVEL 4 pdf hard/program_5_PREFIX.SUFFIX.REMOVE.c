#include<stdio.h>
#include<string.h>
#define q 100
void rotate(char *string1,int size)
{
    char temp;
    for (int i=0;i<size-1;i++)
    {
        temp=string1[i];
        string1[i]=string1[i+1];
        string1[i+1]=temp;
    }
}
int main()
{
    char string1[q],first;
    fgets(string1,q,stdin);
    int size=strlen(string1),count=1;
    if(string1[size-1]=='\n')
    {
        string1[size-1]='\0';
        size--;
    }
    for(int i=0;i<size;i++)
    {
        if(string1[i]=='a'||string1[i]=='b'||string1[i]=='c')
        {
            if(string1[0]==string1[size-1])
            {
                first=string1[0];
                rotate(string1,size);
            }
            else if(string1[0]!=string1[size-1] && string1[size-1]==first)
            {
                for(int j=0;j<size;j++)
                {
                    if(string1[size-1]==first)
                    {
                        string1[size-1]='\0';
                        size--;
                    }
                }
                i=0;
            }
        }
        else
        {
            printf("Invalid input");
            return 0;
        }
    }
    int n=strlen(string1);
    printf("%d",n);
}