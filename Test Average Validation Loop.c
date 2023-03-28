/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numGrade;
    int total = 0; //accumaltor
    int i = 0; //loop caontrol variable and accumalotor
    int grade;
    double average;
    
    //get number of tests to average
    printf("Enter the number of tests to be averaged:  ");
    scanf("%d", &numGrade);
    for(i=0; i < numGrade; i++)
    {
        printf("Enter a grade:  ");
        scanf("%d", &grade);
        //validate the grade
        while(grade < 0 || grade > 110)
        {
            printf("ERROR:  grade is out of range.\n");
            printf("Please re-enter:  ");
            scanf("%d", &grade);
        }
        total += grade;
    }
    //calculate average
    average = total / (double)numGrade;
    
    printf("Average:  %.2lf\n", average);
    return 0;
}

