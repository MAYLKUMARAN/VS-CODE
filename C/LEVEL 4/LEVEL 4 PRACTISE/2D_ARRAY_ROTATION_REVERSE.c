#include<stdio.h>
int main()
{
    char a[100][100],b[100][100];
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%s",a[i]);
    }
    printf("\n");
    for(int i=0;i<num;i++)
    {
        for(int j=0;a[i][j]!='\0';j++)
        {
            b[j][num-i-1]=a[i][j];
        }
    }
    for(int i=0;i<num;i++)
    {
        printf("%s",b[i]);
        printf("\n");
    }
}