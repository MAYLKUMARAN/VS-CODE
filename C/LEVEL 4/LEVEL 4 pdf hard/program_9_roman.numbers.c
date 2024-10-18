#include<stdio.h>
#include<string.h>
int main()
{
    char ch,string[100];
    int index=0,sum=0;
    while(1)
    {
        ch=getchar();
        if(ch=='\n')
        {
            break;
        }
        if(ch=='I' || ch=='V' || ch=='X' || ch=='L' || ch=='C' || ch=='D' || ch=='M')
        {
        string[index]=ch;
        index++;
        }
        else
        {
            printf("Invalid Input");
            return 0;
        }
    }
    for(int i=0;i<=index;i++)
    {
        if(string[i]=='I')
        {
            sum+=1;
        }
        else if(string[i]=='V')
        {
            sum+=5;
        }
        else if(string[i]=='X')
        {
            sum+=10;
        }
        else if(string[i]=='L')
        {
            sum+=50;
        }
        else if(string[i]=='C')
        {
            sum+=100;
        }
        else if(string[i]=='D')
        {
            sum+=500;
        }
        else if(string[i]=='M')
        {
            sum+=1000;
        }
        if(string[i]=='V' && string[i-1]=='I' || string[i]=='X' && string[i-1]=='I')
        {
            sum-=2;
        }
        if(string[i]=='L' && string[i-1]=='X' || string[i]=='C' && string[i-1]=='X')
        {
            sum-=20;
        }
        if(string[i]=='D' && string[i-1]=='C' || string[i]=='M' && string[i-1]=='C')
        {
            sum-=200;
        }
    }
    printf("%d",sum);
}