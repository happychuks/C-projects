#include <stdio.h>

void printPoints(struct point * start);

struct point {
    int x;
    int y;
    struct point * next;
};

int main(void) {
    struct point pt1 = {2, 3, NULL};
    struct point pt2 = {-1, 4, NULL};
    struct point pt3 = {7, -5, NULL};
    struct point * start;

    start = ptr1;
    pt1-> = &pt2;
    pt2->next = &pt3;

    printPoints(start);
    

    return 0;
}

void printPoints(struct point * start) {
    struct point * ptr;
    ptr = start;
    while (ptr!=NULL) {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }

}