/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float media, frequencia;

    printf("Qual a media final do aluno? ");
    scanf("%f", &media);

    printf("Qual o percentual de frequencia? ");
    scanf("%f", &frequencia);

    if (frequencia < 75)
    {
        printf("O aluno foi reprovado por falta.\n");
    }
    else if (media < 6.0)
    {
        printf("O aluno foi reprovado por nota.\n");
    }
    else
    {
        printf("O aluno foi aprovado.\n");
    }

    return 0;
}