#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    
    // Fill in your main function here
    struct point * polygon;
    int num, i;
    
    printf("Enter number of points for the polygon: ");
    scanf("%d", &num);
    polygon = (struct point *) malloc(num * sizeof(struct point));
    for (i = 0; i < num; i++)
    {
        initializePoly(&polygon[i], i);
    }
    
    printPoly(polygon, num);
    free(polygon);
    
    
    return 0;

}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point * ptr, int vertices) 
{
    ptr->x = (vertices * -1);
    ptr->y = (vertices * vertices);
    
}