#include<stdio.h>

int main(void) {
	int arr[2][3] = {{2, 5, 1}, {3, 0, 9}};
	
	printf("%d \n", arr[0][1]); /*This prints the 2nd element in the first row*/
	printf("%d \n", *(*(arr)));/*This prints the 1st element in the first row using pointer*/
	printf("%d \n", *(*(arr)+2));/*This prints the 3rd element in the first row*/
	printf("%d \n", *(*(arr+1)+2)); /*This prints the 3rd element in the 2nd row using pointer*/


	return 0;
}
