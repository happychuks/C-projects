#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
    struct point * next;
};
void printPoints(struct point * start);
struct point * append(struct point *end, struct point *newptr);
struct point * createPoint(int x, int y);
void freePoints(struct point * start);

int main(void) {
    struct point pt1 = {2, 3, NULL};
    struct point pt2 = {-1, 4, NULL};
    struct point pt3 = {7, -5, NULL};
    struct point * start, * end, * newpt;
    int num, i, x, y;

    printf("How many points? ");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        printf("x = ");
        scanf("%d", &x);
        printf("y = ");
        scanf("%d", &y);
        newpt = createPoint(x,y);
        if (i ==0) {
            start = end =  newpt;
        } else {
            end = append(end, newpt);
        }
    }
    printf("You entered: \n");
    printPoints(start);
    freePoints(start);
  
    return 0;
}

//this function prints out each point
void printPoints(struct point * start) {
    struct point * ptr;
    ptr = start;
    while (ptr!=NULL) {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }

}

//this function add new point to the end of the list
struct point * append(struct point *end, struct point *newptr) {
    end->next = newptr;

    return (end->next);
}

struct point * createPoint(int x, int y) {
    struct point *ptr;
    ptr = (struct point *) malloc(sizeof(struct point));
    ptr->x = x;
    ptr->y = y;
    ptr->next = NULL;

    
    return ptr;
}

void freePoints(struct point * start) {
    struct point * ptr = start;
    while (ptr != NULL) {
        start = ptr;
        ptr = ptr->next;
        free(start);
    }
}