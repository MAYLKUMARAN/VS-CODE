#include<stdio.h>
#include<string.h>

int dupe(char c[], char a, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(c[i] == a)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char a[100], c[100];
    int b[100] = {0}, d[100] = {0}, count = 0;

    scanf("%[^\n]", a);

    for(int i = 0; a[i] != '\0'; i++)
    {
        for(int j = 0; a[j] != '\0'; j++)
        {
            if(a[i] == a[j])
            {
                b[i]++;
            }
        }
    }

    int size = strlen(a);

    for(int i = 0; a[i] != '\0'; i++)
    {
        if(!dupe(c, a[i], count))
        {
            continue;
        }
        c[count] = a[i];
        count++;
    }

    for(int i = 0; i < count; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(c[i] == a[j])
            {
                d[i] = b[j];
            }
        }
    }

    for(int i = 0; i < count; i++)
    {
        if(d[i] >= 2)
        {
            printf("%c->%d\n", c[i], d[i]);
        }
    }

    return 0;
}