/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, media;

printf("Digite a sua primeira nota: ");

scanf("%f",&nota1);

printf("Digite a sua segunda nota: ");

scanf("%f",&nota2);

media = (nota1+nota2)/2.0f;

if (media>=6){

printf("\n Parabéns, você foi aprovado com média %.2f", media);

}

else{

printf("\n Não foi dessa vez..., sorry :(");

}

return 0;
}
