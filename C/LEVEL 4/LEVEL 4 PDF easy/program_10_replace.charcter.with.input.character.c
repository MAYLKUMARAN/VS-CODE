#include<stdio.h>
int main()
{
    char a[100],b,c='o';
   // scanf("%[^\n]",a);(doesn't work)
   fgets(a,100,stdin);  
    scanf("%c ",&b);
    scanf("%c",&c);

    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==b)
        {
            a[i]=c;
        }
    }
    printf("%s",a);
}