#include <stdio.h>

int main(){
    char carta1;
    char carta2;
    char estado1[3];
    char estado2[3];
    char codigo1[4];
    char codigo2[4];
    char nome_da_cidade1[21];
    char nome_da_cidade2[21];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos_turisticos1;
    int pontos_turisticos2;

 printf("Digite a carta: ");
    scanf(" %c", &carta1);

    printf("Digite o estado (ex: SP): ");
    scanf("%2s", estado1);

    printf("Digite o código da carta (ex: A12): ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %20[^\n]", nome_da_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);


}