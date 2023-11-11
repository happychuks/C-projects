#include<stdio.h>

/**
 * array - its a data structure used to store data of same data type
 * 
*/


int main()
{
   int winners_Maths = 50;
   int winners_Eng = 70;
   int winners_Phy = 30;
   int winners_Chem = 40;

/*index 0 = Maths, index 1 = Eng, index 2 = Phy, index 3 = Chem*/
   int winners_ExamScores[4] = {50, 70, 30, 40};

   printf("Score is %d \n", winners_ExamScores[2]);

   
}