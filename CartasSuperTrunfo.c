/*
Marcio Lemos de Paiva - Matricula 202507333488
Desafio Super Trunfo - Nivel Aventureiro
*/

#include <stdio.h>
#include <string.h>

int main(){
    char Estado1[1], Estado2[1]; // De A a H
    char Codigo1[2], Codigo2[2]; // 01 a 04
    char CodConc1[3], CodConc2[3];
    char Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2;
    float Area1, Area2, DensPop1, DensPop2;
    float Pib1, Pib2, PIBPerCapta1, PIBPerCapta2;
    int PontosTuristicos1, PontosTuristicos2;
    
    printf("Insira dos dados da Carta 1: \n");
    printf("Estado (uma letra maiuscula entre A e H): \n");
    scanf("%s", Estado1);

    printf("Codigo da carta (dois numeros comecando com 0 entre 01 e 04: \n");
    scanf("%s", Codigo1);

    printf("Cidade (ate 20 carecteres juntos):\n");
    scanf("%s", Cidade1);

    printf("Populacao:\n");
    scanf("%d", &Populacao1);

    printf("Area:\n");
    scanf("%f", &Area1);

    printf("PIB:\n");
    scanf("%f", &Pib1);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &PontosTuristicos1);

    // Calculando a densidade populacional
    DensPop1 = (float) Populacao1 / Area1;

    // Calculando PIB per capta
    PIBPerCapta1 = (float) Pib1 * 1000000000 / Populacao1;

    strcpy(CodConc1, Estado1);
    strcat(CodConc1, Codigo1);
    printf("Carta 1:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %.2f km2\n PIB: %.2f bilhoes de reais\n Numero de pontos turisticos: %d\n Densidade populacional: %.2f hab/km2\n PIB per capta: %.2f reais\n\n\n", Estado1, CodConc1, Cidade1, Populacao1, Area1, Pib1, PontosTuristicos1, DensPop1, PIBPerCapta1);

    printf("Insira dos dados da Carta 2: \n");
    printf("Estado (uma letra maiuscula entre A e H): \n");
    scanf("%s", Estado2);
   
    printf("Codigo da carta (dois numeros comecando com 0 entre 01 e 04: \n");
    scanf("%s", Codigo2);
   

    printf("Cidade (ate 20 carecteres juntos):\n");
    scanf("%s", Cidade2);

    printf("Populacao:\n");
    scanf("%d", &Populacao2);

    printf("Area:\n");
    scanf("%f", &Area2);

    printf("PIB:\n");
    scanf("%f", &Pib2);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &PontosTuristicos2);

    // Calculando a densidade populacional
    DensPop2 = (float) Populacao2 / Area2;

    // Calculando PIB per capta
    PIBPerCapta2 = (float) Pib2 * 1000000000/ Populacao2;

    strcpy(CodConc2, Estado2);
    strcat(CodConc2, Codigo2);
    printf("Carta 2:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %.2f km2\n PIB: %.2f bilhoes de reais\n Numero de pontos turisticos: %d\n Densidade populacional: %.2f hab/km2\n PIB per capta: %.2f reais\n\n\n", Estado2, CodConc2, Cidade2, Populacao2, Area2, Pib2, PontosTuristicos2, DensPop2, PIBPerCapta2);

    return 0;
}
