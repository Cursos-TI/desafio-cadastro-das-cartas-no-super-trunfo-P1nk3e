#include <stdio.h>

int main(){

    char estado, codigo[10], cidade[50];
    int populacao, turistica;
    float area, pib;
    char estado3, codigo2[10], cidade2[50];
    int populacao2, turistica2;
    float area2, pib2;

    printf("Carta 1 - Digite a letra do estado: \n");
    scanf("%c", &estado);

    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a populacao da cidade: \n");
    scanf("%i", &populacao);

    printf("Digite a area da cidade \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%i", &turistica);
    
	
	
	
	
	printf("Carta 2 - Digite a letra do estado: \n");
    scanf(" %c", &estado3);

    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a populacao da cidade: \n");
    scanf("%i", &populacao2);

    printf("Digite a area da cidade \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%i", &turistica2);

    printf("CARTA 1\n");
	printf("Letra do estado: %c\n", estado);
    printf("Codigo do estado: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("Populacao da cidade: %i\n", populacao);
    printf("Area: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Pontos turisticos: %d\n", turistica);
    
    printf("CARTA 2\n");
	printf("Letra do estado: %c\n", estado3);
    printf("Codigo do estado: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao da cidade: %i\n", populacao2);
    printf("Area: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Pontos turisticos: %d\n", turistica2);

     


    return 0;
}