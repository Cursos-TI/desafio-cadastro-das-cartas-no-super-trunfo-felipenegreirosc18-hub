#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
        printf("Desafio Super Trunfo!\n");

    // Declaração das variáveis da Carta 1
    char Estado1[2];
    char CodigoDaCarta1[4], NomeDaCidade1[50];
    int Populacao1, NumeroDePontosTuristicos1;
    float Area1, PIB1;
 
    // Declaração das variáveis da Carta 2
    char Estado2[2];
    char CodigoDaCarta2[4], NomeDaCidade2[50];
    int Populacao2, NumeroDePontosTuristicos2;
    float Area2, PIB2;


    // Entrada de dados da Carta 1
        printf("\nCadastro da Carta1:\n");
        printf("Digite a letra do Estado (letra de A a H):\n");
        scanf ("%1s", Estado1);

        printf("Digite o Código Da Carta (ex: A01): \n");
        scanf("%3s", CodigoDaCarta1);

        printf("Digite o Nome Da Cidade: \n");
        scanf("%50s", NomeDaCidade1);

        printf("Digite o tamanho da População: \n");
        scanf("%d", &Populacao1);

        printf("Digite a Área (em km²): \n");
        scanf("%f",  &Area1);

        printf("Digite o PIB: \n");
        scanf("%f", &PIB1);

        printf("Digite o Número De Pontos Turísticos: \n");
        scanf("%d", &NumeroDePontosTuristicos1);

        // Entrada de dados da Carta 2
        printf("\nCadastro da Carta2:\n");
        printf("Digite a letra do Estado (letra de A a H):\n");
        scanf ("%1s", Estado2);

        printf("Digite o Código Da Carta (ex: A01): \n");
        scanf("%3s", CodigoDaCarta2);

        printf("Digite o Nome Da Cidade: \n");
        scanf("%50s", NomeDaCidade2);

        printf("Digite o tamanho da População: \n");
        scanf("%d", &Populacao2);

        printf("Digite a Área (em km²): \n");
        scanf("%f",  &Area2);

        printf("Digite o PIB: \n");
        scanf("%f", &PIB2);

        printf("Digite o Número De Pontos Turísticos: \n");
        scanf("%d", &NumeroDePontosTuristicos2);

    // Exibição dos dados da Carta1
        printf("\n--- Carta1 ---\n");     
        printf("Estado: %s\n", Estado1);
        printf("Código: %s\n", CodigoDaCarta1);
        printf("Nome Da Cidade: %s\n", NomeDaCidade1);
        printf("População: %d\n", Populacao1);
        printf("Área: %.2f km²\n", Area1);
        printf("PIB: %.2f bilhões de reais\n", PIB1);
        printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos1);
        float DensidadePopulacional1 = Populacao1 / Area1;
        printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);

        //O Pib per Capita é multiplicado por 1.000.000.000 por estar informado ser em bilhões de reais
        float PibperCapita1 = PIB1 * 1000000000 / Populacao1;
        printf("Pib per Capita: %.2f Reais\n", PibperCapita1);

        // Exibição dos dados da Carta2
        printf("\n---Carta2---\n");
        printf("Estado: %s\n", Estado2);
        printf("Código: %s\n", CodigoDaCarta2);
        printf("Nome Da Cidade: %s\n", NomeDaCidade2);
        printf("População: %d\n", Populacao2);
        printf("Área: %.2f km²\n", Area2);
        printf("PIB: %.2f bilhões de reais\n", PIB2);
        printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos2);
        float DensidadePopulacional2 = Populacao2 / Area2;
        printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
        //O Pib per Capita é multiplicado por 1.000.000.000 por estar informado ser em bilhões de reais
        float PibperCapita2 = PIB2 * 1000000000 / Populacao2;
        printf("Pib per Capita: %.2f Reais\n", PibperCapita2);
 
    return 0;
}
