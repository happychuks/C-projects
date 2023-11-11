#include <stdio.h>
#include <stdlib.h>


//int r();


  //Case 1


void say_Hello(char firstName[], int aGe);

int main() 
{
    char name[15];
    int age;
    printf("Hi there!, what is your name?\n");
    scanf("%s", name);
    
    printf("Hello, what is your age?\n");
    scanf("%d", &age);

    //printf("Hello %s, you are %d years old\n", name, age);
    
    say_Hello(name,age);

    return 0;
}

void say_Hello(char firstName[], int aGe)
{
    printf("Hello %s, you are %d years old\n", firstName, aGe);
    
}






/* Case 2:
int incr(int i)
{
    static int count = 0;
    count = count + i;
    return count;
}

int main()
{
    int i, j;
    for (i = 0; i <=4; i++)
        j=incr(i);
    
    printf("%d\n", j);
}*/

/* Case 3:
int main() 
{
    
    for (r(); r(); r())
        printf("%d", r());

    printf("\n");
    return 0;
}

int r()
{
    static int num = 7;
        return num--; 
} */

/* Case 4:

void func(int * p, int m)
{
    m = m + 5;
    *p  = *p + m;

    return;
}

void main()
{
    int i = 5, j = 10;

    func(&i, j);
    printf("%d\n", i+j);
    
}
*/

/* Case 5:

int jumble (int x, int y)
{
    x = 2 * x + y; 
    return x;
}

int main()
{
    int x = 2, y = 5;
    y = jumble(y, x);
    x = jumble(y, x);
    printf("%d\n", x);

    return 0;
}
*/
 
