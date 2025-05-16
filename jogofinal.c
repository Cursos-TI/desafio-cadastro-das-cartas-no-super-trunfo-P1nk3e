#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int resultado1, resultado2;
    char primeiroatributo, segundoatributo;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;
     
    srand(time(0));
    ataque1 = 1;
    ataque2 = 0;
    defesa1 = 1;
    defesa2 = 0;
    recuo1 = 0;
    recuo2 = 1;
  
    printf(">>>BEM VINDO AO JOGO<<<\n");
    printf("Escolha o primeiro atributo:\n");
    printf("A - ATAQUE\n");
    printf("D - DEFESA\n");
    printf("R - RECUO\n");

    printf("Escolha a comparação: ");
    scanf("%c", &primeiroatributo);

    switch (primeiroatributo)
    {
    case 'A':
    case 'a':
     printf("Você escolheu Ataque!\n");
     resultado1 = ataque1 > ataque2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
     printf("Você escolheu Defesa!\n");
     resultado1 = defesa1 > defesa2 ? 1 : 0;
        break;
    case 'R':
    case 'r':
     printf("Você escolheu Defesa!\n");
     resultado1 = recuo1 > recuo2 ? 1 : 0;
        break;
    default:
     printf("Opção invalida!");
        break;
    }

    printf("Escolha o segundo atributo:\n");
    printf("A - ATAQUE\n");
    printf("D - DEFESA\n");
    printf("R - RECUO\n");

    printf("Escolha a comparação: ");
    scanf("%c", &segundoatributo);
    
    if (primeiroatributo == segundoatributo){
        printf("Escolha de atributos iguais\n");
    }else {
      switch (segundoatributo)
     {
    case 'A':
    case 'a':
     printf("Você escolheu Ataque!\n");
     resultado2 = ataque1 > ataque2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
     printf("Você escolheu Defesa!\n");
     resultado2 = defesa1 > defesa2 ? 1 : 0;
        break;
    case 'R':
    case 'r':
     printf("Você escolheu Defesa!\n");
     resultado2 = recuo1 > recuo2 ? 1 : 0;
        break;
    default:
     printf("Opção invalida!");
        break;
    }
   }   



}