/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

const int SIZE = 5;

int main()
{
    int array[SIZE];
    
    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a integer: #%d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    printf("In order entered:\n");
    for(int i = 0; i < SIZE; i++)
        printf("%d ", array[i]);
    printf("\n\n");
    
    return 0;
}

