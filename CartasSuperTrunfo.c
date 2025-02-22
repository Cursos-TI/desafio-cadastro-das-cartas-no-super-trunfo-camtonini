#include <stdio.h>

int main(){
    char estado[50];
    char cidade[50];
    int populacao;
    int ponstosTuristicos;
    float area;
    float pib;

    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a Pouplacao: \n");
    scanf("%d", &populacao);

    printf("Digite qtd Pontos Tristicos: \n");
    scanf("%d", &ponstosTuristicos);

    printf("Digite a Area em KM: \n");
    scanf("%f", &area);

    printf("Digite o Pib: \n");
    scanf("%f", &pib);

    printf("Nome do Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Pontos Turisticos: %d\n",ponstoTuristicos);
    printf("Area: %f\n", area);
    printf("Pib: %f\n", pib);
    
    return 0;

}