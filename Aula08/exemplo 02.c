/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float valores[8];
    float soma = 0.0f, media;
    int acimaMedia = 0;
    int i;

    for (i = 0; i < 8; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);

        soma += valores[i];
    }

    media = soma / 8;

    for (i = 0; i < 8; i++) {
        if (valores[i] > media) {
            acimaMedia++;
        }
    }

    printf("O valor da media e: %.2f\n", media);
    printf("Valores acima da media: %d\n", acimaMedia);

    return 0;
}

