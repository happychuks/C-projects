#include <stdio.h>

void jack_bauer(void);
void jack_bauer1(void);

int main() {
    // Write C code here
    
    jack_bauer1();
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
                
            }
            
        }
        
    }
    putchar('\n');
}

void jack_bauer1(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			printf("%02d:%02d\n", h, m);
		}
	}
	printf("New Time Posting\n");
}