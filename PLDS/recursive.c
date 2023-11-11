#include "main.h"

/**
 * main - entry point
 * 
 * Return: 0
*/

int main(void)
{
    char str[100];

    printf("\n********************************\n");
    printf("\t********* Smart Program *********\n");
    printf("\n********************************\n");

    while (1)
    {
        printf("\n Please enter your name: ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';

        if (strlen(str)>0)
            break;
        printf("\nPlease you have to enter your name: \n");
    }

    _macish(str);
    printf("\n");
    return (0);
}

void _winner(char *str, int first_callback)
{
    if (!str)
        return;
    else if (first_callback)
    {
        printf("\n Hi %c", toupper(*str++));
        first_callback = 0;
    }
    else
    {
        printf("%c", *str);
        _winner((str + 1), first_callback);
    }
    printf("%s, Welcome to Smart Program\n", str);
}

void _macish(char *str)
{
    if (!str)
        return;
    
    else
    {
        _macish(str + 1);
        printf("%c", *str);
    }
    
}