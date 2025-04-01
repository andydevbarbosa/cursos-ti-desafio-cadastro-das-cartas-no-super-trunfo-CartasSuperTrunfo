#include <stdio.h>

int main (){
    
    printf("Cadastro da carta 1/2:\n"); // Inicio do cadastro das cartas 1/2

    //Variáveis Primeira Carta
    char estado [2];
    char codigo [5];
    char cidade [50];
    int populacao;
    float area;
    float pib;
    int p_tutisticos;

    printf("Digite a letra do primeiro Estado: \n ");
    scanf("%s", &estado);

    printf("Digite o código: \n ");
    scanf("%s", &codigo);

    printf("Digite a cidade: \n ");
    scanf("%s", &cidade);

    printf("Digite a população: \n ");
    scanf("%f", &populacao);

    printf("Digite a área: \n ");
    scanf("%f", &area);

    printf("Digite o PIB: \n ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n ");
    scanf("%i", &p_tutisticos);

    printf("Carta 1/2:\n A letra do Estado é:%s - O código da cidade é:%s - Nome da Cidade: %s - População Total: %i - O tamanho em área é: %.2f - O PIB é: %.2f - Total de Pontos Turísticos: %i\n\n" , estado , codigo , cidade , populacao , area , pib , p_tutisticos);


    printf("Cadastro da carta 2/2:\n"); // Inicio do cadastro das cartas 2/2

    //Variáveis Segunda Carta
    char estado2 [2];
    char codigo2 [5];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int p_tutisticos2;

    printf("Digite a letra do primeiro Estado: \n ");
    scanf("%s", &estado2);

    printf("Digite o código: \n ");
    scanf("%s", &codigo2);

    printf("Digite a cidade: \n ");
    scanf("%s", &cidade2);

    printf("Digite a população: \n ");
    scanf("%f", &populacao2);

    printf("Digite a área: \n ");
    scanf("%f", &area2);

    printf("Digite o PIB: \n ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n ");
    scanf("%i", &p_tutisticos2);

    printf("Carta 2/2:\n A letra do Estado é:%s - O código da cidade é:%s - Nome da Cidade: %s - População Total: %i - O tamanho em área é: %.2f - O PIB é: %.2f - Total de Pontos Turísticos: %i\n\n" , estado2 , codigo2 , cidade2 , populacao2 , area2 , pib2 , p_tutisticos2);

    return 0;

}
