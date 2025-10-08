// Write a Menu-Driven Program to perform the following operations on a string using C:
// a) Lenghth of the string
// b) Copy one string to another
// c) Concatenate two strings(Combine two strings)
// d) Compare two strings
// e) Reverse a string
// f) Convert a string to Uppercase
// g) Convert a string to Lowercase
// h) Exit

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void length(char str[])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    printf("Length of the string: %d\n", len);
}
void copy(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("Copied string: %s\n", str2);
}
void concatenate(char str1[], char str2[])
{
    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Concatenated string: %s\n", str1);
}
void compare(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            printf("Strings are not equal\n");
            return;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
}
void reverse(char str[])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
}
void to_uppercase(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Uppercase string: %s\n", str);
}
void to_lowercase(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("Lowercase string: %s\n", str);
}
int main()
{
    char str1[100], str2[100];
    int choice;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Length of the string\n");
        printf("2. Copy one string to another\n");
        printf("3. Concatenate two strings\n");
        printf("4. Compare two strings\n");
        printf("5. Reverse a string\n");
        printf("6. Convert a string to Uppercase\n");
        printf("7. Convert a string to Lowercase\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str1);
            length(str1);
            break;
        case 2:
            printf("Enter the source string: ");
            scanf("%s", str1);
            copy(str1, str2);
            break;
        case 3:
            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            concatenate(str1, str2);
            break;
        case 4:
            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            compare(str1, str2);
            break;
        case 5:
            printf("Enter a string: ");
            scanf("%s", str1);
            reverse(str1);
            break;
        case 6:
            printf("Enter a string: ");
            scanf("%s", str1);
            to_uppercase(str1);
            break;
        case 7:
            printf("Enter a string: ");
            scanf("%s", str1);
            to_lowercase(str1);
            break;
        case 8:
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}