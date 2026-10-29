/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float raio, perimetro;
    float pi = 3.14159;

    printf("Qual a medida do raio (em cm)?\n");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;

    printf("O perimetro da circunferencia e %.2f cm\n", perimetro);

    return 0;
}
