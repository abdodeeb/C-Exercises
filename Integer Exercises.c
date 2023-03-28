/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int loop = 1;
    
    while(loop ==1)
    {
        // ask user for 2 numbers
        int loop = 1;
        int add1, add2;
        int sum;
        
        while(loop == 1)
        {
            printf("Enter the first integer to be added. ");
            scanf("%d", &add1);
            
             printf("Enter the first integer to be added. ");
            scanf("%d", &add2);
        }
        //add the two numbers
        
        sum = add1 + add2;
        //print the result
        printf("%d + %d = %d\n\n", add1, add2, sum);
        // ask the user if they want to repeat operation
        printf("Do you wish to add more numbers?\n");
        printf("1.  Add more numbers\n");
        printf("2.  End the program\n");
        printf("Enter your selection (1 or 2):  ");
        scanf("%d", &loop);
        //validate the loop entered 
        while((loop ==1 || loop == 2))
        {
            printf("ERROR:  You must enter a 1 or a 2.\n Please re-enter    ");
            scanf ("%n");
        }
        printf("\n");
}
return 0;
}
