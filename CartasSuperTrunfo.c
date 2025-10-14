/*
Marcio Lemos de Paiva - Matricula 202507333488
Desafio Super Trunfo - Desenvolvendo a logica - Nivel Mestre
*/

#include <stdio.h>
#include <string.h>

int main(){
    char Estado1[1], Estado2[1]; // De A a H
    char Codigo1[2], Codigo2[2]; // 01 a 04
    char CodConc1[3], CodConc2[3];
    char Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2;
    float Area1, Area2, DensPop1, DensPop2, Soma1, Soma2;
    float Pib1, Pib2, PIBPerCapta1, PIBPerCapta2;
    int PontosTuristicos1, PontosTuristicos2;
    float SuperPoder1, SuperPoder2;
    int escolhaAtributo, escolhaAtributo2;
    
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

    // Calculando super poder
    SuperPoder1 = Populacao1 + Area1 + Pib1 + PontosTuristicos1 + PIBPerCapta1 + (1/DensPop1);

    strcpy(CodConc1, Estado1);
    strcat(CodConc1, Codigo1);
    printf("Carta 1:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %.2f km2\n PIB: %.2f bilhoes de reais\n Numero de pontos turisticos: %d\n Densidade populacional: %.2f hab/km2\n PIB per capta: %.2f reais\n Super Poder: %.2f\n\n\n", Estado1, CodConc1, Cidade1, Populacao1, Area1, Pib1, PontosTuristicos1, DensPop1, PIBPerCapta1, SuperPoder1);

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

    // Calculando super poder
    SuperPoder2 = Populacao2 + Area2 + Pib2 + PontosTuristicos2 + PIBPerCapta2 + (1 / DensPop2);

    strcpy(CodConc2, Estado2);
    strcat(CodConc2, Codigo2);
    printf("Carta 2:\n Estado: %s\n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %.2f km2\n PIB: %.2f bilhoes de reais\n Numero de pontos turisticos: %d\n Densidade populacional: %.2f hab/km2\n PIB per capta: %.2f reais\n Super Poder: %.2f\n\n\n", Estado2, CodConc2, Cidade2, Populacao2, Area2, Pib2, PontosTuristicos2, DensPop2, PIBPerCapta2, SuperPoder2);

    // Criando o menu interativo

    printf("Escolha o primeiro atributo a ser comparado:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capta\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolhaAtributo);

    switch (escolhaAtributo)
    {
    case 1:
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capta\n");
        printf("7. Super Poder\n");
        scanf("%d", &escolhaAtributo2);
        switch (escolhaAtributo2)
        {
        case 2:
            Soma1 = (float) Populacao1 + Area1;
            Soma2 = (float) Populacao2 + Area2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + Area 1 = %.2f - Populacao 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + Area 1 = %.2f - Populacao 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + Area 1 = %.2f - Populacao 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 3:
            Soma1 = (float) Populacao1 + Pib1;
            Soma2 = (float) Populacao2 + Pib2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + PIB 1 = %.2f - Populacao 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + PIB 1 = %.2f - Populacao 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + PIB 1 = %.2f - Populacao 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 4:
            Soma1 = (float) Populacao1 + PontosTuristicos1;
            Soma2 = (float) Populacao2 + PontosTuristicos2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + Pontos Turisticos 1 = %.2f - Populacao 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + Pontos Turisticos 1 = %.2f - Populacao 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + Pontos Turisticos 1 = %.2f - Populacao 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 5:
            Soma1 = (float) Populacao1 + (1 / DensPop1);
            Soma2 = (float) Populacao2 + (1 / DensPop2);
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + (1 / Densidade Populacional 1) = %.2f - Populacao 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + (1 / Densidade Populacional 1) = %.2f - Populacao 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + (1 / Densidade Populacional 1) = %.2f - Populacao 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 6:
            Soma1 = (float) Populacao1 + PIBPerCapta1;
            Soma2 = (float) Populacao2 + PIBPerCapta2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + PIB per Capta 1 = %.2f - Populacao 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + PIB per Capta 1 = %.2f - Populacao 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + PIB per Capta 1 = %.2f - Populacao 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 7:
            Soma1 = (float) Populacao1 + SuperPoder1;
            Soma2 = (float) Populacao2 + SuperPoder2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + Super Poder 1 = %.2f - Populacao 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + Super Poder 1 = %.2f - Populacao 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Populacao 1 + Super Poder 1 = %.2f - Populacao 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        default:
            printf("Opcao Invalida !!!\n");
            break;
        }
        break;
    case 2:
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("1. Populacao\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capta\n");
        printf("7. Super Poder\n");
        scanf("%d", &escolhaAtributo2);
        switch (escolhaAtributo2)
        {
        case 1:
            Soma1 = (float) Area1 + Populacao1;
            Soma2 = (float) Area2 + Populacao2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + Populacao 1 = %.2f - Area 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + Populacao 1 = %.2f - Area 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + Populacao 1 = %.2f - Area 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 3:
            Soma1 = (float) Area1 + Pib1;
            Soma2 = (float) Area2 + Pib2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + PIB 1 = %.2f - Area 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + PIB 1 = %.2f - Area 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + PIB 1 = %.2f - Area 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 4:
            Soma1 = (float) Area1 + PontosTuristicos1;
            Soma2 = (float) Area2 + PontosTuristicos2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + Pontos Turisticos 1 = %.2f - Area 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + Pontos Turisticos 1 = %.2f - Area 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + Pontos Turisticos 1 = %.2f - Area 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 5:
            Soma1 = (float) Area1 + (1 / DensPop1);
            Soma2 = (float) Area2 + (1 / DensPop2);
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + (1 / Densidade Populacional 1) = %.2f - Area 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + (1 / Densidade Populacional 1) = %.2f - Area 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + (1 / Densidade Populacional 1) = %.2f - Area 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 6:
            Soma1 = (float) Area1 + PIBPerCapta1;
            Soma2 = (float) Area2 + PIBPerCapta2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + PIB per Capta 1 = %.2f - Area 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + PIB per Capta 1 = %.2f - Area 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + PIB per Capta 1 = %.2f - Area 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 7:
            Soma1 = (float) Area1 + SuperPoder1;
            Soma2 = (float) Area2 + SuperPoder2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + Super Poder 1 = %.2f - Area 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + Super Poder 1 = %.2f - Area 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Area 1 + Super Poder 1 = %.2f - Area 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        default:
            printf("Opcao Invalida !!!\n");
            break;
        } 
        break;
    case 3:
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capta\n");
        printf("7. Super Poder\n");
        scanf("%d", &escolhaAtributo2);
        switch (escolhaAtributo2)
        {
        case 1:
            Soma1 = (float) Pib1 + Populacao1;
            Soma2 = (float) Pib2 + Populacao2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + Populacao 1 = %.2f - PIB 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + Populacao 1 = %.2f - PIB 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + Populacao 1 = %.2f - PIB 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 2:
            Soma1 = (float) Pib1 + Area1;
            Soma2 = (float) Pib2 + Area2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + Area 1 = %.2f - PIB 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + Area 1 = %.2f - PIB 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + Area 1 = %.2f - PIB 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 4:
            Soma1 = (float) Pib1 + PontosTuristicos1;
            Soma2 = (float) Pib2 + PontosTuristicos2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + Pontos Turisticos 1 = %.2f - PIB 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + Pontos Turisticos 1 = %.2f - PIB 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + Pontos Turisticos 1 = %.2f - PIB 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 5:
            Soma1 = (float) Pib1 + (1 / DensPop1);
            Soma2 = (float) Pib2 + (1 / DensPop2);
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + (1 / Densidade Populacional 1) = %.2f - PIB 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + (1 / Densidade Populacional 1) = %.2f - PIB 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + (1 / Densidade Populacional 1) = %.2f - PIB 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 6:
            Soma1 = (float) Pib1 + PIBPerCapta1;
            Soma2 = (float) Pib2 + PIBPerCapta2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + PIB per Capta 1 = %.2f - PIB 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + PIB per Capta 1 = %.2f - PIB 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + PIB per Capta 1 = %.2f - PIB 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 7:
            Soma1 = (float) Pib1 + SuperPoder1;
            Soma2 = (float) Pib2 + SuperPoder2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + Super Poder 1 = %.2f - PIB 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + Super Poder 1 = %.2f - PIB 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB 1 + Super Poder 1 = %.2f - PIB 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        default:
            printf("Opcao Invalida !!!\n");
            break;
        }
        break;
    case 4:
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capta\n");
        printf("7. Super Poder\n");
        scanf("%d", &escolhaAtributo2);
        switch (escolhaAtributo2)
        {
        case 1:
            Soma1 = (float) PontosTuristicos1 + Populacao1;
            Soma2 = (float) PontosTuristicos2 + Populacao2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + Populacao 1 = %.2f - Pontos Turisticos 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + Populacao 1 = %.2f - Pontos Turisticos 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + Populacao 1 = %.2f - Pontos Turisticos 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 2:
            Soma1 = (float) PontosTuristicos1 + Area1;
            Soma2 = (float) PontosTuristicos2 + Area2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + Area 1 = %.2f - Pontos Turisticos 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + Area 1 = %.2f - Pontos Turisticos 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + Area 1 = %.2f - Pontos Turisticos 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 3:
            Soma1 = (float) PontosTuristicos1 + Pib1;
            Soma2 = (float) PontosTuristicos2 + Pib2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + PIB 1 = %.2f - Pontos Turisticos 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + PIB 1 = %.2f - Pontos Turisticos 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + PIB 1 = %.2f - Pontos Turisticos 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 5:
            Soma1 = (float) PontosTuristicos1 + (1 / DensPop1);
            Soma2 = (float) PontosTuristicos2 + (1 / DensPop2);
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + (1 / Densidade Populacional 1) = %.2f - Pontos Turisticos 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + (1 / Densidade Populacional 1) = %.2f - Pontos Turisticos 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + (1 / Densidade Populacional 1) = %.2f - Pontos Turisticos 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 6:
            Soma1 = (float) PontosTuristicos1 + PIBPerCapta1;
            Soma2 = (float) PontosTuristicos2 + PIBPerCapta2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + PIB per Capta 1 = %.2f - Pontos Turisticos 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + PIB per Capta 1 = %.2f - Pontos Turisticos 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + PIB per Capta 1 = %.2f - Pontos Turisticos 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 7:
            Soma1 = (float) PontosTuristicos1 + SuperPoder1;
            Soma2 = (float) PontosTuristicos2 + SuperPoder2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + Super Poder 1 = %.2f - Pontos Turisticos 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + Super Poder 1 = %.2f - Pontos Turisticos 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Pontos Turisticos 1 + Super Poder 1 = %.2f - Pontos Turisticos 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        default:
            printf("Opcao Invalida !!!\n");
            break;
        }
        break;
    case 5:
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("6. PIB per Capta\n");
        printf("7. Super Poder\n");
        scanf("%d", &escolhaAtributo2);
        switch (escolhaAtributo2)
        {
        case 1:
            Soma1 = (float) (1 / DensPop1) + Populacao1;
            Soma2 = (float) (1 / DensPop2) + Populacao2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional) 1 + Populacao 1 = %.2f - (1 / Densidade Populacional) 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional) 1 + Populacao 1 = %.2f - (1 / Densidade Populacional) 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional) 1 + Populacao 1 = %.2f - (1 / Densidade Populacional) 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 2:
            Soma1 = (float) (1 / DensPop1) + Area1;
            Soma2 = (float) (1 / DensPop2) + Area2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional) 1 + Area 1 = %.2f - (1 / Densidade Populacional) 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional) 1 + Area 1 = %.2f - (1 / Densidade Populacional) 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional) 1 + Area 1 = %.2f - (1 / Densidade Populacional) 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 3:
            Soma1 = (float) (1 / DensPop1) + Pib1;
            Soma2 = (float) (1 / DensPop2) + Pib2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional) 1 + PIB 1 = %.2f - (1 / Densidade Populacional) 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional) 1 + PIB 1 = %.2f - (1 / Densidade Populacional) 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional) 1 + PIB 1 = %.2f - (1 / Densidade Populacional) 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 4:
            Soma1 = (float) (1 / DensPop1) + PontosTuristicos1;
            Soma2 = (float) (1 / DensPop2) + PontosTuristicos2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional 1) + Pontos Turisticos 1 = %.2f - (1 / Densidade Populacional 2) + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional 1) + Pontos Turisticos 1 = %.2f - (1 / Densidade Populacional 2) + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional 1) + Pontos Turisticos 1 = %.2f - (1 / Densidade Populacional 2) + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 6:
            Soma1 = (float) (1 + DensPop1) + PIBPerCapta1;
            Soma2 = (float) (1 + DensPop2) + PIBPerCapta2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional 1) + PIB per Capta 1 = %.2f - (1 / Densidade Populacional 2) + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional 1) + PIB per Capta 1 = %.2f - (1 / Densidade Populacional 2) + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional 1) + PIB per Capta 1 = %.2f - (1 / Densidade Populacional 2) + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 7:
            Soma1 = (float) (1 / DensPop1) + SuperPoder1;
            Soma2 = (float) (1 / DensPop2) + SuperPoder2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional 1) + Super Poder 1 = %.2f - (1 / Densidade Populacional 2) + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional 1) + Super Poder 1 = %.2f - (1 / Densidade Populacional 2) + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("(1 / Densidade Populacional 1) + Super Poder 1 = %.2f - (1 / Densidade Populacional 2) + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        default:
            printf("Opcao Invalida !!!\n");
            break;
        }
        break;
    case 6:
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Populacional\n");
        printf("7. Super Poder\n");
        scanf("%d", &escolhaAtributo2);
        switch (escolhaAtributo2)
        {
        case 1:
            Soma1 = (float) PIBPerCapta1 + Populacao1;
            Soma2 = (float) PIBPerCapta2 + Populacao2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + Populacao 1 = %.2f - PIB per Capta 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + Populacao 1 = %.2f - PIB per Capta 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + Populacao 1 = %.2f - PIB per Capta 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 2:
            Soma1 = (float) PIBPerCapta1 + Area1;
            Soma2 = (float) PIBPerCapta2 + Area2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + Area 1 = %.2f - PIB per Capta 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + Area 1 = %.2f - PIB per Capta 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + Area 1 = %.2f - PIB per Capta 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 3:
            Soma1 = (float) PIBPerCapta1 + Pib1;
            Soma2 = (float) PIBPerCapta2 + Pib2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + PIB 1 = %.2f - PIB per Capta 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + PIB 1 = %.2f - PIB per Capta 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + PIB 1 = %.2f - PIB per Capta 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 4:
            Soma1 = (float) PIBPerCapta1 + PontosTuristicos1;
            Soma2 = (float) PIBPerCapta2 + PontosTuristicos2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + Pontos Turisticos 1 = %.2f - PIB per Capta 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + Pontos Turisticos 1 = %.2f - PIB per Capta 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + Pontos Turisticos 1 = %.2f - PIB per Capta 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 5:
            Soma1 = (float) PIBPerCapta1 + (1 / DensPop1);
            Soma2 = (float) PIBPerCapta2 + (1 / DensPop1);
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + (1 / Densidade Populacional 1) = %.2f - PIB per Capta 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + (1 / Densidade Populacional 1) = %.2f - PIB per Capta 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + (1 / Densidade Populacional 1) = %.2f - PIB per Capta 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 7:
            Soma1 = (float) PIBPerCapta1 + SuperPoder1;
            Soma2 = (float) PIBPerCapta2 + SuperPoder2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + Super Poder 1 = %.2f - PIB per Capta 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + Super Poder 1 = %.2f - PIB per Capta 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("PIB per Capta 1 + Super Poder 1 = %.2f - PIB per Capta 2 + Super Poder 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        default:
            printf("Opcao Invalida !!!\n");
            break;
        }
        break;
    case 7:
        printf("Escolha o segundo atributo a ser comparado:\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capta\n");
        scanf("%d", &escolhaAtributo2);
        switch (escolhaAtributo2)
        {
        case 1:
            Soma1 = (float) SuperPoder1 + Populacao1;
            Soma2 = (float) SuperPoder2 + Populacao2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 = %.2f - Super Poder 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 = %.2f - Super Poder 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 = %.2f - Super Poder 2 + Populacao 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 2:
            Soma1 = (float) SuperPoder1 + Area1;
            Soma2 = (float) SuperPoder2 + Area2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 = %.2f - Super Poder 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 = %.2f - Super Poder 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 = %.2f - Super Poder 2 + Area 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 3:
            Soma1 = (float) SuperPoder1 + Pib1;
            Soma2 = (float) SuperPoder2 + Pib2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 + PIB 1 = %.2f - Super Poder 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 + PIB 1 = %.2f - Super Poder 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 + PIB 1 = %.2f - Super Poder 2 + PIB 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 4:
            Soma1 = (float) SuperPoder1 + PontosTuristicos1;
            Soma2 = (float) SuperPoder2 + PontosTuristicos2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 + Pontos Turisticos 1 = %.2f - Super Poder 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 + Pontos Turisticos 1 = %.2f - Super Poder 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 + Pontos Turisticos 1 = %.2f - Super Poder 2 + Pontos Turisticos 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 5:
            Soma1 = (float) SuperPoder1 + (1 / DensPop1);
            Soma2 = (float) SuperPoder2 + (1 / DensPop1);
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 + (1 / Densidade Populacional 1) = %.2f - Super Poder 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 + (1 / Densidade Populacional 1) = %.2f - Super Poder 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 + (1 / Densidade Populacional 1) = %.2f - Super Poder 2 + (1 / Densidade Populacional 2) = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        case 6:
            Soma1 = (float) SuperPoder1 + PIBPerCapta1;
            Soma2 = (float) SuperPoder2 + PIBPerCapta2;
            if (Soma1 == Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 + PIB per Capta 1 = %.2f - Super Poder 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Empatou !!!");
            } else if (Soma1 > Soma2)
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 + PIB per Capta 1 = %.2f - Super Poder 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 1 Venceu !!!");
            } else
            {
                printf("Cidade 1 - %s - Cidade 2 - %s\n", Cidade1, Cidade2);
                printf("Super Poder 1 + PIB per Capta 1 = %.2f - Super Poder 2 + PIB per Capta 2 = %.2f\n", Soma1, Soma2);
                printf("Carta 2 Venceu !!!");
            }
            break;
        default:
            printf("Opcao Invalida !!!\n");
            break;
        }
        break;
    default:
        printf("**** Opcao invalida ! ****\n");
        break;
    }

    return 0;
}