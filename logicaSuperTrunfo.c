#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int main(){
    char EstadoA = 'A';
    char CodigoA[] = "A01";
    char NomeCidadeA[20] = "São Paulo";
    int PopulacaoA = 12325000;
    float AreaA = 1521.11;
    float PibA = 699.28;
    int Pontos_TuristicosA = 50;
    float Densidade_PopulacionalA;
    float Pib_Per_CapitaA;
    float SuperPoderA;
    
    
    char EstadoB = 'B';
    char CodigoB[] = "A02";
    char NomeCidadeB[20] = "Rio De Janeiro";
    int PopulacaoB = 6748000;
    float AreaB = 1200.25;
    float PibB = 300.50;
    int Pontos_TuristicosB = 30;
    float Densidade_PopulacionalB;
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
    
    printf("       CARTA 1         \n");

    printf("Digite o Estado da Carta A (A-H): ");
    scanf(" %c", &EstadoA);

    printf("Digite o código da cidade A: ");
    scanf(" %s", CodigoA);

    printf("Digite o nome da cidade A: ");
    scanf(" %[^\n]", NomeCidadeA);

    printf("Digite a população da cidade A: ");
    scanf(" %d", &PopulacaoA);

    printf("Digite a área da cidade A: ");
    scanf(" %f", &AreaA);

    printf("Digite o PIB da cidade A: ");
    scanf(" %f", &PibA);

    printf("Digite o número de pontos turísticos da cidade A: ");
    scanf(" %d", &Pontos_TuristicosA);

    
    printf("             CARTA 2        \n");

    printf("\nDigite o Estado da Carta 2 (A-H): ");
    scanf(" %c", &EstadoB);

    printf("Digite o código da cidade 2: ");
    scanf(" %s", CodigoB);

    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]", NomeCidadeB);

    printf("Digite a população da cidade 2: ");
    scanf(" %d", &PopulacaoB);

    printf("Digite a área da cidade 2: ");
    scanf(" %f", &AreaB);

    printf("Digite o PIB da cidade 2: ");
    scanf(" %f", &PibB);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf(" %d", &Pontos_TuristicosB);

    printf("      CARTA VENCEDORA      \n");

    if(PopulacaoA > PopulacaoB) {
       printf("Cidade A (São Paulo) tem maior populaçao. \n");
    } else{
        printf("Cidade B ( Rio De Janeiro) tem amior população. \n");
    }
    if(AreaA > AreaB) {
        printf("Cidade A tem a maior Área. \n");
    } else{
        printf("Cidade B tem a maior Àrea. \n");
    }
    if(PibA > PibB) {
        printf("Cidade A tem o PIB maior. \n");
    } else{
        printf("Cidade B tem o PIB maior. \n");
    }
    if(Pontos_TuristicosA > Pontos_TuristicosB) {
        printf("Cidade A tem maior Pontos Turisticos. \n");
    } else{
        printf("Cidade B tem mais Pontos Turisticos. \n");
    }
    if(Densidade_PopulacionalA < Densidade_PopulacionalB) {
        printf("Cidade A tem a menor Densidade Populacional. \n");
    } else{
        printf("Cidade B tem a menor Densidade Populacional. \n");
    }
    if(Pib_Per_CapitaA > Pib_Per_CapitaB) {
        printf("Cidade A tem o maior Pib Per Capita. \n");
    } else{
        printf("Cidade B tem o maior Pib per Capita. \n");
    }
    
    printf("\n--- VENCEDOR FINAL (SUPER PODER) ---\n");
    
    if (SuperPoderA > SuperPoderB) {
        printf("A cidade vencedora é: %s\n", NomeCidadeA);
    } else {
        printf("A cidade vencedora é: %s\n", NomeCidadeB);
    }

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    
}
