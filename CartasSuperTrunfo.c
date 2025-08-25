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
    float Densidade_Populacional1;
    float PIB_per_Capita1;
    float Densidade_Populacional2;
    float PIB_per_Capita2;

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

    Densidade_Populacional1 = (float) (populacao1 / area1);
    PIB_per_Capita1 = (float) (pib1 *1000000000 ) / populacao1;


    printf("\n--- Dados da Carta ---\n");
    printf("Carta: %c\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
    printf("Pib per Capita: %.2f reais\n", PIB_per_Capita1);

    puts(""); 

    printf("Digite a carta: ");
    scanf(" %c", &carta2);

    printf("Digite o estado (ex: SP): ");
    scanf("%2s", estado2);

    printf("Digite o código da carta (ex: A12): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %20[^\n]", nome_da_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    Densidade_Populacional2 = (populacao2 / area2); 
    PIB_per_Capita2 = (pib2 * 1000000000) / populacao2;


    printf("\n--- Dados da Carta ---\n");
    printf("Carta: %c\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
    printf("Pib per Capita: %.2f reais\n", PIB_per_Capita2);

    //Criação do objeto Super Poder 
    float SuperPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + PIB_per_Capita1 + ( 1 / Densidade_Populacional1);
    float SuperPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + PIB_per_Capita2 + ( 1 / Densidade_Populacional2);



}