#include<stdio.h>
#include<string.h>
void sort(int arr[],int size)
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
    if (strlen(string_1) ==1 || strlen(string_1) > 1000001 || strlen(string_2) ==1 || strlen(string_2) > 1000001)
        {
            printf("String 1 must be between 1 and 100000 characters");
        }
    else
        {
        if(strlen(string_1)==strlen(string_2))
            {
                
                    int size,count=0;
                    size=strlen(string_1)-1;
                    for (int i=0;i<size;i++)
                        {
                            arr_1[i]=(int)string_1[i];
                            arr_2[i]=(int)string_2[i];
                        }
                    for(int i=0;i<size;i++)
                    {
                    if(arr_1[i]<97 || arr_2[i]>122 || arr_1[i]>122 || arr_2[i]<97)
                    {
                        printf("Only lowercase characters and space is permitted in the input string\n");
                    }
                    else
                    {
                    sort(arr_1,size);
                    sort(arr_2,size);
                    for(int i=0;i<size;i++)
                        {
                            if(arr_1[i]==arr_2[i])
                                {
                                    count++;
                                }
                        }
                    if(count==size)
                        {
                            printf("TRUE");
                        }
                    else
                        {  
                            printf("FALSE");
                        }
                        }
                        break;
                    }
            }
            
            else
                {
                    printf("FLASE");
                }
    }
}