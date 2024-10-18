#include<stdio.h>
#include<string.h>
void dupe(char a[],int b[])
{
    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=0;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                b[i]++;
            }
        }
    }
}
int main()
{
    char a[100],b[100];
    int  c[100]={0},d[100]={0},count=0;
    scanf(" %[^\n]",a);
    scanf(" %[^\n]",b);
    dupe(a,c);
    dupe(b,d);
    int size1=strlen(a),size2=strlen(b);
    if(size1==size2)
    {
    for (int i=0;i<size1-1;i++)
    {
            if(c[i]==d[i])
            {
                count++;
            }
    }
    }
    if(count==size1-1)
    {
        printf("isomorphic");
    }
    else{
        printf("Not isomorphic");
    }
}