#include<stdio.h>
#include<string.h>
int sort(int arr[],int size)
{
    int temp;
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            if (arr[i]<arr[j])
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
    char string_1[100],string_2[100];
    int arr_1[100],arr_2[100];
    fgets(string_1,100,stdin);
    fgets(string_2,100,stdin);
    int size,count=0;
    size=strlen(string_1);
    for (int i=0;i<size;i++)
    {
        arr_1[i]=string_1[i]-'0';
        arr_2[i]=string_2[i]-'0';
    }
    // for(int i=0;i<size;i++)
    // {
    // printf("%d:%d | ",arr_1[i],arr_2[i]);
    // }
    sort(arr_1,size);
    sort(arr_2,size);
    for(int i=0;i<size;i++)
    {
    printf("%d:%d | ",arr_1[i],arr_2[i]);
    }
}