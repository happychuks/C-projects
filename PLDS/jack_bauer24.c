#include <stdio.h>

void jack_bauer(void);
int main() {
    // Write C code here
    
    jack_bauer();
    return 0;
}

void jack_bauer(void)
{
    int a, b, c, d;
    
    for (a = 48; a <= 50; a++)
    {
        for (b = 48; b <= 57; b++)
        {
            for (c = 48; c <= 53 ; c++)
            {
                for (d = 48; d <= 57; d++)
                {
                    if (b >= 52)
                        break;
                    putchar(a);
                    putchar(b);
                    putchar(58);
                    putchar(c);
                    putchar(d);
                    putchar('\n');
                }
                //putchar('\n');
            }
            //putchar('\n');
        }
        
    }
    putchar('\n');
}