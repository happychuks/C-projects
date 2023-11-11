#include<stdio.h>

void testPointer(void);

/*Pointers: Special variable whose value is the address of 
another variable*/


int main()
{

testPointer();

return 0;
}

void testPointer(void)
{
        int x = 10;
    int testArray[5] = {2, 5, 0, 1, 7};

    int *ptrX = &x;   
    int *ptrArr = testArray;
    int i;

    
    /*printf("The address of variable x is %p \n", &x);
    printf("The address of x using pointer ptrX is %p \n", ptrX);
    printf("The value of x using pointer is %d \n", *ptrX); ptrX is same as &x
    printf("The value of x using pointer is %d \n", *&x);*/

/*The address of an array points to the address of its
first element (index 0)*/
for (i = 0; i < 5; i++)
{
    printf("The value of index testArray[%d] is %d \n", i, *(ptrArr + i));
}
    //printf("3rd element is %d \n", *(ptrArr + 2));

}