#include <stdio.h>
#include <string.h>

// Função para ler strings com segurança
void lerString(char *dest, int tamanho) {
    fgets(dest, tamanho, stdin);
    dest[strcspn(dest, "\n")] = '\0';
}

int main() {
    // Dados das cartas
    char NomeCidade1[30] = "Cidade A", NomeCidade2[30] = "Cidade B";
    int Populacao1 = 500000, Populacao2 = 800000;
    float Area1 = 1200.5, Area2 = 2000.3;
    float Pib1 = 25000.0, Pib2 = 18000.0;
    int PontosTuristicos1 = 10, PontosTuristicos2 = 8;

    // Cálculos derivados
    float Densidade1 = Populacao1 / Area1;
    float Densidade2 = Populacao2 / Area2;
    float PibPerCapita1 = Pib1 / Populacao1;
    float PibPerCapita2 = Pib2 / Populacao2;

    int opcao1, opcao2;
    float valor1A, valor2A, valor1B, valor2B;
    int continuar = 1;

    while (continuar) {
        printf("\n===== MENU DE ATRIBUTOS =====\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. PIB per Capita\n");
        printf("5. Densidade Populacional\n");
        printf("6. Pontos Turísticos\n");

        // Escolha do primeiro atributo
        printf("\nEscolha o PRIMEIRO atributo para comparação: ");
        scanf("%d", &opcao1);

        if (opcao1 < 1 || opcao1 > 6) {
            printf("Opção inválida! Escolha entre 1 e 6.\n");
            continue;
        }

        // Menu dinâmico (remove o atributo já escolhido)
        printf("\n===== ESCOLHA O SEGUNDO ATRIBUTO =====\n");
        for (int i = 1; i <= 6; i++) {
            if (i != opcao1) {
                switch (i) {
                    case 1: printf("1. População\n"); break;
                    case 2: printf("2. Área\n"); break;
                    case 3: printf("3. PIB\n"); break;
                    case 4: printf("4. PIB per Capita\n"); break;
                    case 5: printf("5. Densidade Populacional\n"); break;
                    case 6: printf("6. Pontos Turísticos\n"); break;
                }
            }
        }

        printf("\nEscolha o SEGUNDO atributo para comparação: ");
        scanf("%d", &opcao2);

        if (opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1) {
            printf("Opção inválida! Escolha outro atributo diferente.\n");
            continue;
        }

        // Função para obter valores dos atributos (usando switch)
        switch (opcao1) {
            case 1: valor1A = Populacao1; valor2A = Populacao2; break;
            case 2: valor1A = Area1; valor2A = Area2; break;
            case 3: valor1A = Pib1; valor2A = Pib2; break;
            case 4: valor1A = PibPerCapita1; valor2A = PibPerCapita2; break;
            case 5: valor1A = Densidade1; valor2A = Densidade2; break;
            case 6: valor1A = PontosTuristicos1; valor2A = PontosTuristicos2; break;
            default: valor1A = valor2A = 0; break;
        }

        switch (opcao2) {
            case 1: valor1B = Populacao1; valor2B = Populacao2; break;
            case 2: valor1B = Area1; valor2B = Area2; break;
            case 3: valor1B = Pib1; valor2B = Pib2; break;
            case 4: valor1B = PibPerCapita1; valor2B = PibPerCapita2; break;
            case 5: valor1B = Densidade1; valor2B = Densidade2; break;
            case 6: valor1B = PontosTuristicos1; valor2B = PontosTuristicos2; break;
            default: valor1B = valor2B = 0; break;
        }

        // Comparação dos dois atributos (com operador ternário)
        int pontos1 = 0, pontos2 = 0;

        // Regra: menor densidade vence
        (opcao1 == 5) ? (valor1A < valor2A ? pontos1++ : (valor1A > valor2A ? pontos2++ : 0))
                      : (valor1A > valor2A ? pontos1++ : (valor1A < valor2A ? pontos2++ : 0));

        (opcao2 == 5) ? (valor1B < valor2B ? pontos1++ : (valor1B > valor2B ? pontos2++ : 0))
                      : (valor1B > valor2B ? pontos1++ : (valor1B < valor2B ? pontos2++ : 0));

        // Soma dos atributos
        float soma1 = valor1A + valor1B;
        float soma2 = valor2A + valor2B;

        // Exibição detalhada
        printf("\n===== RESULTADOS =====\n");
        printf("Cidade 1: %s\nCidade 2: %s\n", NomeCidade1, NomeCidade2);
        printf("---------------------------------\n");
        printf("Atributo 1: %.2f x %.2f\n", valor1A, valor2A);
        printf("Atributo 2: %.2f x %.2f\n", valor1B, valor2B);
        printf("---------------------------------\n");
        printf("Soma dos atributos:\n");
        printf("%s: %.2f | %s: %.2f\n", NomeCidade1, soma1, NomeCidade2, soma2);
        printf("---------------------------------\n");

        // Decisão final
        (soma1 > soma2) ? printf("%s venceu a rodada!\n", NomeCidade1)
        : (soma2 > soma1) ? printf("%s venceu a rodada!\n", NomeCidade2)
        : printf("Empate!\n");

        // Menu de continuidade
        printf("\nDeseja jogar novamente? (1 = Sim / 0 = Não): ");
        scanf("%d", &continuar);
    }

    printf("\nObrigado por jogar o Super Trunfo - Nível Mestre!\n");
    return 0;
}
