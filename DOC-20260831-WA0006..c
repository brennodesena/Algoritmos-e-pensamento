/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int hora, minuto, total;

    printf("Hora? ");
    scanf("%d", &hora);

    printf("Minutos? ");
    scanf("%d", &minuto);

    total = hora*60 + minuto;

    printf("já se passaram %d minutos desde o início do dia", total);
}
