#include <stdio.h>

int main()
{
    float largura, comprimento, valor, area, custo;
    int caixas;

    printf("Qual é a largura da área (em metros)? ");
    scanf("%f", &largura);

    printf("Qual é o comprimento da área em metros? ");
    scanf("%f", &comprimento);

    printf("Qual é o valor de cada caixa? ");
    scanf("%f", &valor);

    area = largura * comprimento;

    caixas = (int)(area / 2.5);

    if (area > caixas * 2.5)
    {
        caixas++;
    }

    custo = caixas * valor;

    printf("Área total a ser revestida: %.2f m²\n", area);
    printf("Quantidade de caixas necessárias: %d\n", caixas);
    printf("Custo total da compra: R$ %.2f\n", custo);

    return 0;
}