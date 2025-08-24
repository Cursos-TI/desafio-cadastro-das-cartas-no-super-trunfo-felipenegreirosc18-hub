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

    // Entrada de dados da Carta 1
        printf("Cadastro da Carta1:\n");
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

    // Exibição dos dados da Carta1
        printf("--- Carta1 ---\n");     
        printf("Estado: %s\n", Estado1);
        printf("Código: %s\n", CodigoDaCarta1);
        printf("Nome Da Cidade: %s\n", NomeDaCidade1);
        printf("População: %d\n", Populacao1);
        printf("Área: %.3f\n", Area1);
        printf("PIB: %.3f\n", PIB1);
        printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos1);

    return 0;
}
