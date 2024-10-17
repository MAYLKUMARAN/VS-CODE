#include <stdio.h>
#include <string.h>

int palindrome(char substring[]) {
    int size = strlen(substring);
    
    for (int i = 0; i < size ; i++) {
        if (substring[i] != substring[size - i - 1]) {
            return 0;
        }
    }
    
    return 1;
}

void findSubstrings(char *str, char substrings[][100], int *count) {
    int size = strlen(str); 
    int index = 0;

    for (int i = 0; i < size; i++) {         
        for (int j = i; j < size; j++) {
            int k = 0;
            for (int x = i; x <= j; x++) {
                substrings[index][k++] = str[x];
            }
            substrings[index][k] = '\0';
            index++;
        }
    }

    *count = index;
}

int main() {
    char str[100];
    char substrings[500][100];
    int count = 0, palindromeCount = 0;

    printf("Please enter your string: ");
    scanf("%[^\n]", str);

    findSubstrings(str, substrings, &count);

    printf("Palindromic substrings are:\n");
    char substring2[100];

    for (int i = 0; i < count; i++) {
        strcpy(substring2, substrings[i]);
        if (palindrome(substring2)) {
            printf("%s\n", substrings[i]);
            palindromeCount++;
        }
    }

    printf("No of palindrome substrings: %d\n", palindromeCount);

    return 0;
}
