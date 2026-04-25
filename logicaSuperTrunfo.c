#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int main(){
    
    char NomeCidadeA[20] = "São Paulo";
    int PopulacaoA = 12325000;
    float AreaA = 1521.11;
    float PibA = 699.28;
    int Pontos_TuristicosA = 50;
    float Densidade_PopulacionalA = PopulacaoA / AreaA;
    float Pib_Per_CapitaA;
    float SuperPoderA;
    
    char NomeCidadeB[20] = "Rio De Janeiro";
    int PopulacaoB = 6748000;
    float AreaB = 1200.25;
    float PibB = 300.50;
    int Pontos_TuristicosB = 30;
    float Densidade_PopulacionalB = PopulacaoB / AreaB;
    float Pib_Per_CapitaB;
    float SuperPoderB;
    
    Densidade_PopulacionalA = PopulacaoA / AreaA;
    Pib_Per_CapitaA = (PibA * 1000000000.0)/ PopulacaoA;
    SuperPoderA = PopulacaoA + AreaA + PibA + Pontos_TuristicosA + Pib_Per_CapitaA + (1.0 / Densidade_PopulacionalA);

    Densidade_PopulacionalB = PopulacaoB / AreaB;
    Pib_Per_CapitaB =(PibB * 1000000000.0)/ PopulacaoB;
    SuperPoderB = PopulacaoB + AreaB + PibB + Pontos_TuristicosB + Pib_Per_CapitaB + (1.0 / Densidade_PopulacionalB);

   
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    
    int opcao;
       
      printf("     Cartas Cadastradas   \n");
      printf("1. %s | 2. %s\n", NomeCidadeA, NomeCidadeB);
      printf("--------------------------\n");

      printf("Escolha o Atributo Da Carta.\n");
      printf("1 - Populção:\n");
      printf("2 - Área:\n");
      printf("3 - PIB:\n");
      printf("4 - Pontos Turisticos:\n");
      printf("5 - Densidade Populacional:\n");
      printf("6 - Super Poder: \n");
      printf("opção:\n");
      scanf("%d", &opcao);


      switch (opcao) {
      
        case 1:
       printf("Atributo: População\n");
       printf("%s: %d | %s: %d\n", NomeCidadeA, PopulacaoA, NomeCidadeB, PopulacaoB);
    if (PopulacaoA > PopulacaoB) {
          printf("Vencedor: %s\n", NomeCidadeA);
     } else if (PopulacaoA < PopulacaoB) {
        printf("Vencedor: %s\n", NomeCidadeB);
    } else {
        printf("Empate!\n");
     }
    break;
      
    case 2:
       printf("Atributo: Àrea\n");
       printf("%s: %.2f | %s: %.2f\n", NomeCidadeA, AreaA, NomeCidadeB, AreaB);
    if (AreaA > AreaB) {
       printf("Vencedor: %s\n", NomeCidadeA);
    } else if (AreaA > AreaB) {
        printf("Vencedor: %s\n", NomeCidadeB);
    } else{
        printf("Empate\n");
    }
    break;
      
    case 3:
       printf("Atributo: PIB\n");
       printf("%s: %.2f | %s: %.2f\n", NomeCidadeA, PibA, NomeCidadeB, PibB);
    if (PibA > PibB) {
      printf("Vencedor: %s\n", NomeCidadeA);
    } else if(PibA > PibB) {
        printf("Vencedor: %s\n", NomeCidadeB);
    } else {
        printf("Empate\n");
    }
    break;
      
    case 4:
      printf("Atributo: Pontos Turisticos\n");
      printf("%s: %d | %s: %d\n", NomeCidadeA, Pontos_TuristicosA, NomeCidadeB, Pontos_TuristicosB);
    if (Pontos_TuristicosA > Pontos_TuristicosB){
        printf("Vencedor: %s\n", NomeCidadeA);
    } else if (Pontos_TuristicosA > Pontos_TuristicosB) {
        printf("Vencedor: %s\n", NomeCidadeB);
    } else {
        printf("Empate\n");
    }
    break;
     
     case 5:
       printf("Atributo: Densidade Populacional\n");
       printf("%s: %.2f | %s: %.2f\n", NomeCidadeA, Densidade_PopulacionalA, NomeCidadeB, Densidade_PopulacionalB);
    if (Densidade_PopulacionalA < Densidade_PopulacionalB) {
       printf("Vencedor: %s\n", NomeCidadeA);
    } else if (Densidade_PopulacionalA > Densidade_PopulacionalB) {
        printf("Vencedor: %s\n", NomeCidadeB);
    } else {
        printf("Empate\n");
    }
    break;
      
     case 6:
     printf("Atributo: Super Poder\n");
     printf("%s: %.2f | %s: %.2f\n", NomeCidadeA, SuperPoderA, NomeCidadeB, SuperPoderB);
    if (SuperPoderA > SuperPoderB) {
        printf("Vencedor: %s\n", NomeCidadeA);
    } else if (SuperPoderA > SuperPoderB) {
        printf("Vencedor: %s\n", NomeCidadeB);
    } else {
        printf("Empate\n");
    }
    break;
    

    default:
    printf("Opção inválida! Reinicie o jogo e escolha de 1 a 5.\n");

     break;
}

   

    
}
