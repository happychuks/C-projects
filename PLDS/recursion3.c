#include <stdio.h>

int print(int nb) //when nb = 4, 
{
    if (nb < 0) 
    {
        return (0);
    } int x;
    //printf("%d", nb + print(nb - 1));
    x = nb + print(nb - 1);                 // printf(4 + 2);   || nb--; return nb;
    printf("%d\n",x);
    printf("%d",nb); 
    nb--; 
    printf("%d\n",nb);                  //printf( // 3 + 1);  || nb--; return nb;
    return (nb); 
                                        //printf(// 2 + 0);     || nb--; return nb;
}                                       //printf(// 1 + -1); 0   || nb--; return nb;
                                       //printf( // 0 + 0)); 0    ->|| nb--; return nb;
int main(void)                           //print(-1)//output(0,0);
{
    print(4);
    return (0);
}