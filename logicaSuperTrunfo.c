#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;

    // Cadastro da Carta 2 
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;

    //  Menu de Comparação
    int opcao;
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s\n", nomeCidade1, nomeCidade2);

    
    switch(opcao) {
        case 1: // População
            printf("Atributo: Populacao\n");
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Area (km²)\n");
            if (area1 > area2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB (bilhoes de reais)\n");
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Numero de Pontos Turisticos\n");
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("Atributo: Densidade Demografica (hab/km²)\n");
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha de 1 a 5.\n");
            break;
    }

    return 0;
}
