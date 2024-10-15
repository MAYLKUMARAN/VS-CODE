#include<stdio.h>
#include<string.h>
#define q 100
void sort(int *arr,int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    char string_1[q];
    int array_1[q];
    fgets(string_1,100,stdin);
    int size=strlen(string_1);
    for(int i=0;i<size;i++)
    {
        array_1[i]=(int)string_1[i];
    }
    int temp,arr_1[q];
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(array_1[i]>=97 && array_1[i]<=122)
        {
            temp=array_1[i]-32;
            for(int j=0;j<size;j++)
            {
                if(temp==array_1[j])
                {
                    arr_1[count]=array_1[j];
                    count++;
                }
            }
        }
    }
    sort(arr_1,count);
    char a=(char)arr_1[0];
    if(a=='\0')
    {
        printf("No common letter found");
    }
    printf("%c\n",a);
}   