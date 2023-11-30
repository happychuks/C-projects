#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit * next;
};

struct digit * createNum(int numToStore);
int main(void){
    struct digit * numberPtr;

    int numToStore = 10;
    numberPtr = createNum(numToStore);
    printf("We are storing the digit %d and pointer %p at location %p.\n", numberPtr->num, numberPtr->next, &numberPtr);

    free(numberPtr);

    return 0;
}

struct digit * createNum(int numToStore) {

    struct digit * ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = numToStore;
    ptr->next = NULL;

    return ptr;
}