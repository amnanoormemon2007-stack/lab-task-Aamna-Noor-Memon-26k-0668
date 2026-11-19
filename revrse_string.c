#include <stdio.h>
#include <string.h>

void reverse(char str[], int i)
{
    if (str[i] == '\0')
    {
        return;
    }
    else
    {
        reverse(str, i + 1);
        printf("%c", str[i]);
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reversed string: ");
    reverse(str, 0);

    return 0;
}