#include <stdio.h>
#include <string.h>

void lerString(char *dest, int tamanho) {
    fgets(dest, tamanho, stdin);
    dest[strcspn(dest, "\n")] = '\0';
}

int main() {
    // Carta 1
    char Estado1[20], Codigo1[4], NomeCidade1[30];
    int Populacao1, PontosTuristicos1;
    float Area1, Pib1;

    // Carta 2
    char Estado2[20], Codigo2[4], NomeCidade2[30];
    int Populacao2, PontosTuristicos2;
    float Area2, Pib2;

    // Cadastro da primeira carta
    printf("Cadastro da Primeira Carta:\n");
    printf("Digite o estado: ");
    lerString(Estado1, sizeof(Estado1));

    printf("Digite o codigo da carta: ");
    lerString(Codigo1, sizeof(Codigo1));

    printf("Digite o nome da cidade: ");
    lerString(NomeCidade1, sizeof(NomeCidade1));

    printf("Digite a populacao: ");
    scanf("%d", &Populacao1);
    printf("Digite o tamanho da area: ");
    scanf("%f", &Area1);
    printf("Digite o PIB: ");
    scanf("%f", &Pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &PontosTuristicos1);
    getchar(); // limpa o \n pendente

    // Cadastro da segunda carta
    printf("\nCadastro da Segunda Carta:\n");
    printf("Digite o estado: ");
    lerString(Estado2, sizeof(Estado2));

    printf("Digite o codigo da carta: ");
    lerString(Codigo2, sizeof(Codigo2));

    printf("Digite o nome da cidade: ");
    lerString(NomeCidade2, sizeof(NomeCidade2));

    printf("Digite a populacao: ");
    scanf("%d", &Populacao2);
    printf("Digite o tamanho da area: ");
    scanf("%f", &Area2);
    printf("Digite o PIB: ");
    scanf("%f", &Pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculos adicionais
    float Densidade1 = Populacao1 / Area1;
    float PibPerCapita1 = Pib1 / Populacao1;
    float Densidade2 = Populacao2 / Area2;
    float PibPerCapita2 = Pib2 / Populacao2;

    int opcao;
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. PIB per Capita\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pontos Turísticos\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO ---\n");

    switch (opcao) {
        case 1:
            if (Populacao1 > Populacao2)
                printf("%s venceu pela maior população!\n", NomeCidade1);
            else
                printf("%s venceu pela maior população!\n", NomeCidade2);
            break;

        case 2:
            if (Area1 > Area2)
                printf("%s venceu pela maior área!\n", NomeCidade1);
            else
                printf("%s venceu pela maior área!\n", NomeCidade2);
            break;

        case 3:
            if (Pib1 > Pib2)
                printf("%s venceu pelo maior PIB!\n", NomeCidade1);
            else
                printf("%s venceu pelo maior PIB!\n", NomeCidade2);
            break;

        case 4:
            if (PibPerCapita1 > PibPerCapita2)
                printf("%s venceu pelo maior PIB per capita!\n", NomeCidade1);
            else
                printf("%s venceu pelo maior PIB per capita!\n", NomeCidade2);
            break;

        case 5:
            if (Densidade1 < Densidade2)
                printf("%s venceu pela menor densidade populacional!\n", NomeCidade1);
            else
                printf("%s venceu pela menor densidade populacional!\n", NomeCidade2);
            break;

        case 6:
            if (PontosTuristicos1 > PontosTuristicos2)
                printf("%s venceu por ter mais pontos turísticos!\n", NomeCidade1);
            else
                printf("%s venceu por ter mais pontos turísticos!\n", NomeCidade2);
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
