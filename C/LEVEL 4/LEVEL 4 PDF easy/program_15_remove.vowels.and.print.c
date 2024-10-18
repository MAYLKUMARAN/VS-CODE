#include<stdio.h>
int main()
{
    char a[100];
    scanf("%[^\n]",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
        a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            continue;
        }
        else
        {
            printf("%c",a[i]);
        }
    }
}