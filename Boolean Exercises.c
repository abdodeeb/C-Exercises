/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int boolVar;
    int taxRate = 30;
    int income = 50000;
    int temperature = 80;
    int humidity = 60;
    int age = 19;
    
    boolVar = taxRate > 25 && income < 20000;
    printf("%d\n", boolVar);
    
    boolVar = temperature <= 75 || humidity < 70;
    printf("%d\n", boolVar);
    
    boolVar = age > 21 && age < 60;
    printf("%d\n", boolVar);
    
    boolVar = age == 21 || age ==22;
    printf("%d\n", boolVar);

    return 0;
}

