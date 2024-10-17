#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d:%d:%d",&a,&b,&c);
    if(a<24 && b<60 && c<60)
    {
    printf("HOURS:%d MINUTES:%d SECONDS:%d",a,b,c);
    }
    else
    {
        printf("INVALID INPUT");
    }
}