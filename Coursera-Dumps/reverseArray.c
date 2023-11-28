#include <stdio.h>

void reverseArray(int *);

int main(void) {
    
    int i, arr[6];
    
    for (i = 0; i < 6; i++)
        scanf("%d", (arr + i));
        
    reverseArray(arr);
    
    for (i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    
    
    return 0;
}

void reverseArray(int *ptr){
    int i, j;
    for (i = 0, j = 5; j > i; i++, j--){
        int temp = *(ptr + i); 
        *(ptr + i)  = *(ptr + j);
        * (ptr + j) = temp; 
    }
}