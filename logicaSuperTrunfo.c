#include <stdio.h>
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

    // Cálculos
    float Densidade1 = Populacao1 / Area1;
    float PibPerCapita1 = Pib1 / Populacao1;
    float Densidade2 = Populacao2 / Area2;
    float PibPerCapita2 = Pib2 / Populacao2;

    // Exibição
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", NomeCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f\n", Pib1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: R$ %.2f\n", PibPerCapita1);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", NomeCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", Pib2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: R$ %.2f\n", PibPerCapita2);

  if (" Populacao1 > popupalcao2"){
 printf (" Carta 1 (Ribeirao Preto ) venceu!\n");
   } else {
    printf (" carta 2 (Serrana) venceu! \n");
   }

    

    return 0;
}
