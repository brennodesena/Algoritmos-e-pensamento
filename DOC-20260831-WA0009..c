#include <stdio.h>

int main()
{
    int horas_dia, potencia;
    float consumo;

    printf("Potência do equipamento (W)? ");
    scanf("%d", &potencia);

    printf("Horas de uso por dia? ");
    scanf("%d", &horas_dia);

    consumo = (float)(potencia * horas_dia * 30) / 1000;

    printf("Consumo mensal: %.2f kWh\n", consumo);

    return 0;
}