/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int quantidade_cafe;
    float preço, total;
    
    printf("Digite a quantidade de café: ");
    scanf("%d", &quantidade_cafe);
    
    printf("Digite o preço do café: ");
    scanf("%f", &preço);
    
    total =preço*quantidade_cafe;
    
    printf("O valor total da conta será R$ %.2f.",total);
    return 0;
}