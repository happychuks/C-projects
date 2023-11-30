#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit * next;
};

struct digit * createDigit(int);
struct digit * append(struct digit *, struct digit *);
void printNumber(struct digit * start);
int main(void) {

    struct digit *start, *newDigitptr, *end,  *temp;
    int first = 10;  
    int second = 15;
    int third = 20;

    start = createDigit(first);
    end = start;
    newDigitptr = createDigit(second);
    end = append(end, newDigitptr);
    newDigitptr = createDigit(third);
    end = append(end, newDigitptr);
    printNumber(start);
    temp = start->next; //to retain access to the start of list before freeing so we dont lose our list.
    free(start);
    start = temp;
    temp = start->next;
    free(start);
    free(temp);
    
    return 0;
}

struct digit * createDigit(int dig) {
    struct digit * ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));

    ptr->num = dig;
    ptr->next = NULL;

    return ptr;
}

struct digit * append(struct digit * endNode, struct digit * newDigitptr) {

    endNode->next = newDigitptr;
    endNode = newDigitptr;

    return endNode;
}

void printNumber(struct digit * start) {
    struct digit * ptr;
    ptr = start;
    while (ptr!=NULL) {
        printf("%d\n", ptr->num);
        ptr = ptr->next;
    }
    
}