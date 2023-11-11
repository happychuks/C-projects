#include<stdio.h>
#include<string.h>
#include<ctype.h>

void recursive(char *str, int first_callback);

int main()
{
    char name[100];
    int first_callback;
    printf("================================\n");
    printf("Welcome to the Smart Programming\n");
    printf("================================\n");
    printf("\n");

    while(1)
    {   
        printf("Enter your name here: ");
        //scanf("%s \n", name);
        fgets(name, 100, stdin);

    }
    printf("\n");
    recursive(name, first_callback);
    //printf("Hello %s\n", name);
    printf("\n");
    return 0;
    
    


    return 0;
}

void recursive(char *str, int first_callback)
{
    if(!str)
    {
        return;
    }
    else if (first_callback)
    {
        printf("\n %c", toupper(*str++));
        first_callback = 0;
    }
    else
    {   
        printf("%c", *str);
        recursive((str+1), first_callback);
        
    }

    printf("Hello, %s, welcome to smart programming\n", str);

    
    /*if(str[0] == '\0')
    {
        return;
    }
    else
    {
        printf("%c", str[0]);
        recursive(str+1);
    }*/
}