#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr); 
void freeStudents(struct student * start);
void copyStr(char [], char []);

/* add other prototypes here if needed */

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printf("%s is %d years old.\n", start->name, start->age);
    printf("%s is %d years old.\n", start->next->name, start->next->age);
    printf("%s is %d years old.\n", start->next->next->name, start->next->next->age);
    
    freeStudents(start);
    
    return 0;
}

/* Place your function definitions here. Be sure to include the definition for 
   createStudent() and any other functions you created for the previous task. */

struct student *createStudent(char studentName[], int studentAge) {
    
    struct student * ptr;
    
    ptr = (struct student *) malloc(sizeof(struct student));
    
    //String Copying: You cannot directly assign an array (studentName) to another array (ptr->name). 
    //Instead, you should use a function like strcpy to copy the contents.
    copyStr(studentName, ptr->name);
    ptr->age = studentAge;
    ptr->next = NULL;
    
    
    return ptr;
}

struct student * append(struct student * end, struct student * newStudentptr) {
    
    end->next = newStudentptr;
    end = newStudentptr;
    
    return end;
}

void freeStudents(struct student * start) {
    struct student * ptr, *temp;
    ptr = start;
    
    while (ptr != NULL) {
        temp = ptr->next;
        free(ptr);
        ptr = temp;
        
    }
}

void copyStr(char str1[], char str2[]){
    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
}

