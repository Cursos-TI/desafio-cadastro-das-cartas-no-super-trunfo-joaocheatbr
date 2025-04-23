#include <stdio.h>
 
int main(){
    char estado[20], estado2[20];
    char codigo[20], codigo2[20];
    char cidade[20], cidade2[20];
    int habitantes, habitantes2;
    float area;
    float pib;
    int ponto;
    float area2;
    float pib2;
    int ponto2;

    printf("carta 1, Qual Estado?\n");
    scanf("%s", &estado);

    printf("Codigo do estado?\n");
    scanf("%s", &codigo);

    printf("Qual a cidade?\n");
    scanf("%s", &cidade);

    printf("Quantos Habitantes?\n");
    scanf("%d", &habitantes);

    printf("Qual a area?\n");
    scanf("%f", &area);

    printf("Qual o PIB?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos?\n");
    scanf("%d", &ponto);

    printf("Carta 2, Qual Estado ?\n");
    scanf("%s", &estado2);

    printf("Codigo do estado?\n");
    scanf("%s", &codigo2);

    printf("Qual a cidade?\n");
    scanf("%s", &cidade2);

    printf("Quantos Habitantes?\n");
    scanf("%d", &habitantes2);

    printf("Qual a area?\n");
    scanf("%f", &area2);

    printf("Qual o PIB?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos?\n");
    scanf("%d", &ponto2);

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo do estado: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("Populacao: %d\n", habitantes);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turisticos: %d\n", ponto);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo do estado: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", habitantes2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", ponto2);


}