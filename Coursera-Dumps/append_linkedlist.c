#include <stdio.h>

void printPoints(struct point * start);
struct point * append(struct point *end, struct point *newptr);

struct point {
    int x;
    int y;
    struct point * next;
};

int main(void) {
    struct point pt1 = {2, 3, NULL};
    struct point pt2 = {-1, 4, NULL};
    struct point pt3 = {7, -5, NULL};
    struct point * start, * end;

    start = end = &pt1;
    
    //update end for every call
    end = append(&end, &pt2);
    end = append(&end, &pt3);
    

    printPoints(start);
    

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