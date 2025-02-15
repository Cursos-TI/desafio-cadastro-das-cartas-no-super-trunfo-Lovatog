#include <stdio.h>

int main(){
    char cidade[50];
    int NPT;
    float populacao;
    float area;
    float pib;

    printf("Digite o nome da cidade \n");
    scanf("%s", &cidade);

    printf("Digite o numero da população da cidade \n");
    scanf("%f", &populacao);

    printf("Digite a area da cidade \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turísticos da cidade \n");
    scanf("%d", &NPT);

    printf("Nome da cidade: %s\n População: %f\n", cidade, populacao);
    printf("Area: %f\n PIB: %f\n", area, pib);
    printf("Número de pontos turísticos: %d\n", NPT);

    return 0;
}