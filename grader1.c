//assignment 2 ene212-0071/2023 joshua mativo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 25
int main(void) {
//definition of variables and their imitialization   
 int regno = 0;
    int unit;
    char sf;
    char grade[3];
    char remarks[MAX];
    char unitName[MAX];

    while (1) { // Loop until user decides to exit
        printf("Enter 'A' to continue or any other character to exit: ");
        scanf(" %c", &sf); // Note the space before %c to consume leftover newline

        if (sf != 'A') {
            break; // Exit the loop
        }

        regno++;
        printf("Student %d:\n", regno);

        for (int i = 0; i < 6; i++) { // Changed to < 6, assuming 6 units
            printf("enter unit name : \n");
            scanf(" %s",unitName);
            printf("Enter unit %d score: ", i + 1);
            scanf("%d", &unit);
 	    

            if (unit >= 70) {
               char gradeA[]="A+";
                char remarksA[]="Excellent";
//strcpy is a function in the string.h file that copies the value of the second string into the first one in the paranthesis
               strcpy(grade,gradeA);
	       strcpy(remarks,remarksA);
            } else if (unit >= 60 && unit <= 69) {
                char gradeB[]="B";
               char remarksB[]="Good!";
             strcpy(grade,gradeB);
               strcpy(remarks,remarksB);
            } else if (unit >= 50 && unit <= 59) {
               char gradeC[]="C";
               char remarksC[]="Average";
              strcpy(grade,gradeC);
               strcpy(remarks,remarksC);
            } else if (unit >= 40 && unit <= 49) {
               char gradeD[]="D";
               char remarksD[]="Below Average";
              strcpy(grade,gradeD);
               strcpy(remarks,remarksD);
            } else {
               char gradeF[]="F";
               char remarksF[]="Fails";
               strcpy(grade,gradeF);
               strcpy(remarks,remarksF);
            }
        }
//this prints the data  entered by the user 
    printf("\t\t\t %s", unitName);
 printf("student registration number is %d: ",regno);
 printf("unit score is:%d \n",unit);
printf("unit grade:%s \t\t remark:%s \n", grade,remarks);
    }

    return 0;
}
