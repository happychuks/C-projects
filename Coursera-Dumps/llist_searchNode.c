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
struct digit * searchNumber(struct digit *, int);
struct digit * insertAtFront(struct digit *, struct digit *);
struct digit * reverseNumber(struct digit *);

int main(void) {

    struct digit *start, *ptr, *reverse;
    //int searchNum = 5; //number to be searched
    printf("Please enter a number: ");
    start = readNumber();
    printf("Before number was reversed\n");
    printNumber(start);
    /*ptr = searchNumber(start, searchNum);
    if(ptr != NULL) {
        printf("Found number %d at location %p. \n", searchNum, ptr);
    } else {
        printf("Number %d not found.\n", searchNum);
    } */
    printf("After number was reversed\n");
    reverse = reverseNumber(start);
    printNumber(reverse);
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

struct digit * searchNumber(struct digit * start, int searchNum) {
    struct digit * ptr;
    ptr = start;
    while ((ptr != NULL) && (ptr->num != searchNum)) {
        ptr = ptr->next;
    }

    return ptr;
    
}

struct digit * insertAtFront(struct digit * start, struct digit * newptr) {
    newptr->next = start;
    return newptr;
}

struct digit * reverseNumber(struct digit * start) {
    struct digit *ptr = start;
    struct digit *bstart = NULL;
    struct digit *newdigit;

    if (start != NULL) {
        bstart = createDigit(start->num);
        ptr = ptr->next;
    }
    while (ptr != NULL) {
        newdigit = createDigit(ptr->num);
        bstart = insertAtFront(bstart, newdigit);
        ptr = ptr->next;
    }
    return bstart;
}