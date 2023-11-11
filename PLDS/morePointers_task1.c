// Online C compiler to run C program online
#include <stdio.h>

char *_strcat(char *dest, char *src);

int main() {
    // Write C code here
    
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("This is the new s1 %s", s1);
    printf("This is the new s2 %s \n", s2);
    printf("%s", ptr);

    return 0;
}

char *_strcat(char *dest, char *src)
{
	int i = 0; 

	while (dest[i] != '\0'){
	i++;
	}
	
	int c = 0;
	while (src[c] != '\0')
	{
	    
	    
	    dest[i] = src[c];
		i++;
		c++;
	    
	}
	
// 	for (i = 0; dest[i] != '\0'; i++)
// 		;

// 	for (c = 0; src[c] != '\0'; c++)
// 	{
// 		dest[i] = src[c];
// 		i++;
// 	}

	dest[i] = '\0';
	printf("Concatenanted string is: %s \n", dest);
	return (dest);
}