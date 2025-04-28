#include <stdio.h>   // Biblioteca padrão de entrada e saída

int main() {         // Função principal
    // Código aqui // primeira carta
    int carta;
    char estado;
    char codigo[04];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    //segunda carta
    int carta2;
    char estado2;
    char codigo2[04];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //printf e scanf leitura dos dados de entrada digitados de modo interativo carta 1

    printf("Digite o número da primeira carta:\n"); 
    scanf("%d", &carta);

    printf("Digite a letra do estado:\n");
    scanf(" %c", &estado); // espaço antes do %c para consumir o \n

    printf("Digite o código da carta:\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);

    printf("Digite o valor da população:\n");
    scanf("%d", &populacao);

    printf("Digite o valor da área em km²:\n");
    scanf("%f", &area);

    printf("Digite o valor do PIB:\n");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos);

    // segunda carta
    printf("Digite o número da segunda carta:\n"); 
    scanf("%d", &carta2);

    printf("Digite a letra do estado:\n");
    scanf(" %c", &estado2); // espaço antes do %c para consumir o \n

    printf("Digite o código da carta:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite o valor da população:\n");
    scanf("%d", &populacao2);

    printf("Digite o valor da área em km²:\n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB:\n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    // Apresentação dos dados carta 1
    printf("\nCarta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosturisticos);
    
    // Apresentação dos dados carta 2
    printf("\nCarta: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);


    return 0;        // Finaliza o programa
}
