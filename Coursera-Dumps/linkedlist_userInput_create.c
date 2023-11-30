#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit * next;
};

struct digit * createDigit(int);
struct digit * append(struct digit *, struct digit *);
void printNumber(struct digit * start);

struct digit * readNumber();
void freeNumber(struct digit * start);

int main(void) {

    struct digit *start;
    printf("Please enter a number: ");
    start = readNumber();
    printNumber(start);
    freeNumber(start);
    
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
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
    
}

struct digit * readNumber(){
    char c;
    int d;
    struct digit * start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c - 48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        //this reads the next character until newline is encountered
        scanf("%c", &c);
    }
    return start;
}
void freeNumber(struct digit * start) {
    struct digit * ptr, * temp;
    ptr = start;
    

    while (ptr != NULL) {
        temp = ptr->next;
        free(ptr);
        ptr = temp;
        
    }
}