// TEMA 2 - Super Trunfo em C: desenvolvendo a lógica do jogo
// Desafio: nível novato

#include <stdio.h>

int main() {
    // Declaração de variáveis 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontostur1;
    

    // Declaração de variáveis 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontostur2;

    // Declaração de variáveis para contagem de vitórias
    int vitorias1 = 0; // Contador de vitórias da carta 1
    int vitorias2 = 0; // Contador de vitórias da carta 2
    
    // Comparação
    int resultado1, resultado2;
    char primeiroatributo, segundoatributo;
    // Menu
    int opcao;

    printf(">>>Bem vindo ao jogo Super trunfo!<<<\n");
    printf("Selecione alguma alternativa\n");
    printf("\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Regras\n");
    printf("3 - Sair do Jogo\n");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        
        break;
    case 2:
        printf("As regras são:\n");
        break;   
    
    default:
     printf("Opção invalida.");
        break;
    }




    // Dados 1
    printf("Cadastro da 1ª carta\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);  // espaço antes do %c limpa o buffer

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nomeCidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de R$): R$ ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontostur1);

    // Dados 2
    printf("Cadastro da 2ª carta\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de R$): R$ ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontostur2);

    // Cálculos

    // Calcular densidade populacional
    float densidade1 = populacao1 / area1;  // Densidade populacional da carta 1
    float densidade2 = populacao2 / area2;  // Densidade populacional da carta 2

    // Calcular PIB per capita
    // o PIB está em bilhões de reais. A notação 1e9 significa 1 × 10⁹ (ou seja, 1 bilhão)

    float pibPerCapita1 = pib1 * 1e9 / populacao1;  // PIB per capita da carta 1
    float pibPerCapita2 = pib2 * 1e9 / populacao2;  // PIB per capita da carta 2

    // Normalizar os valores para evitar overflow
    // O PIB per capita é calculado em reais, enquanto o PIB é em bilhões de reais. Para evitar overflow, convertemos o PIB para reais.
    float popNorm1 = populacao1 / 1000000.0;         // normaliza por milhão
    float areaNorm1 = area1 / 1000.0;                // normaliza por mil km²
    float pibNorm1 = pib1;                           // já está em bilhões
    float pontosTurNorm1 = pontostur1 / 10.0;        // normaliza por 10
    float pibPerCapitaNorm1 = pibPerCapita1 / 50000.0; // normaliza por 50 mil
    float densidadeInvNorm1 = 1.0f / densidade1 * 100; // dá peso ao inverso

    float popNorm2 = populacao2 / 1000000.0;         // normaliza por milhão
    float areaNorm2 = area2 / 1000.0;                // normaliza por mil km²
    float pibNorm2 = pib2;                           // já está em bilhões
    float pontosTurNorm2 = pontostur2 / 10.0;        // normaliza por 10
    float pibPerCapitaNorm2 = pibPerCapita2 / 50000.0; // normaliza por 50 mil
    float densidadeInvNorm2 = 1.0f / densidade2 * 100; // dá peso ao inverso

    // Calcular super poder
    // O super poder é calculado com todos os valores números da carta, e o inverso da densidade populacional(Quanto menor a densidade, maior o poder.).
    // Armazenando o maior valor em uma variável chamada superPoder1 e o menor em superPoder2.
    float superPoder1 = popNorm1 + areaNorm1 + pibNorm1 + pontosTurNorm1 + pibPerCapitaNorm1 + densidadeInvNorm1;
    float superPoder2 = popNorm2 + areaNorm2 + pibNorm2 + pontosTurNorm2 + pibPerCapitaNorm2 + densidadeInvNorm2;

    // Mostrando as cartas

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontostur1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontostur2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("Escolha o primeiro atributo:\n");
    printf("P - População\n");
    printf("T - Ponto turistico\n");
    printf("S - Super Poder\n");

    printf("Escolha a comparação: ");
    scanf("%c", &primeiroatributo);

    switch (primeiroatributo)
    {
    case 'P':
    case 'p':
     printf("Você escolheu População!\n");
     resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 'T':
    case 't':
     printf("Você escolheu Turistica!\n");
     resultado1 = pontostur1 > pontostur2 ? 1 : 0;
        break;
    case 'S':
    case 's':
     printf("Você escolheu Defesa!\n");
     resultado1 = superPoder1 > superPoder2 ? 1 : 0;
        break;
    default:
     printf("Opção invalida!");
        break;
    }

    printf("Escolha o primeiro atributo:\n");
    printf("P - População\n");
    printf("T - Ponto turistico\n");
    printf("S - Super Poder\n");

    printf("Escolha a comparação: ");
    scanf("%c", &segundoatributo);
    
    if (primeiroatributo == segundoatributo){
        printf("Escolha de atributos iguais\n");
    }else {
      switch (segundoatributo)
     {
    case 'P':
    case 'p':
     printf("Você escolheu população!\n");
     resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 'T':
    case 't':
     printf("Você escolheu Turistica!\n");
     resultado2 = pontostur1 > pontostur2 ? 1 : 0;
        break;
    case 'S':
    case 's':
     printf("Você escolheu Super Poder!\n");
     resultado2 = superPoder1 > superPoder2 ? 1 : 0;
        break;
    default:
     printf("Opção invalida!");
        break;
    }
   }
    if(resultado1 && resultado2){
        printf("Você venceu!\n");
    }else if (resultado1 != resultado2){
        printf("Empate!\n");
    }else{
        printf("Você perdeu!\n");
    }

    return 0;
}