#include <stdio.h>
/**
 * main - Entry Point to perform the sorting operation
 * @list[]: This is the unsorted list to be sorted
 * @n: This is int number of items in the list
 * 
 * Return: 0 if success
*/

void bubbleSort(int list[]);
int main(void){

    int n = 10;
    int list[] = {23, 1, -3, 6, 90, 32, 56, 43, 12, 5};
    bubbleSort(list);

    

    return 0;
}

/**
 * bubbleSort - This is a function that sorts a list of items
 * @list[]: List to be sorted
 * @n: Total number of items in the list
 * 
 * Returns: Nothing
*/
void bubbleSort(int list[]) 
{
    int n = 10;
    for (int i = 0; i < n-1; i++) //this traverse the unsorted list (n-1) number of times
    {
        for (int j = 0; j < n - 1; j++) 
        {
            if (list[j] > list[j + 1]) //this is the swapping and sorting logic
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) //this prints the sorted list
        printf("%d ", list[i]);
    
    printf("\n");
}