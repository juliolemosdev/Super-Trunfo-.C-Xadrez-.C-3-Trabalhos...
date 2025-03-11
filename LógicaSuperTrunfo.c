#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação de Cartas
// Aluno Kauã de Sousa Ferreira
// Nível Aventureiro

int main() {

    // Declaração de variáveis:
    char estado1, estado2;
    char codigo_carta1[10], cidade1[20], codigo_carta2[10], cidade2[20];
    unsigned long int quantidade_populacao1, quantidade_populacao2;
    int quantidade_pontos_turisticos1, quantidade_pontos_turisticos2, opcao, atributo;
    float area_cidade1, PIB1, area_cidade2, PIB2, densidade_populacao1, densidade_populacao2;
    float PIB_perCapta1, PIB_perCapta2, super_poder1, super_poder2;

    // Criação da primeira carta:
    printf("Olá! Vamos iniciar a criação da sua primeira carta no Super Trunfo! \n");

    // Entrada de dados com 'printf' e saída de dados com 'scanf':
    printf("Escolha uma letra de A a H para seu estado: \n");
     scanf(" %c", &estado1);

    printf("Escolha um número de 01 a 04 para o código de sua carta: \n");
     scanf("%s", codigo_carta1);

    printf("Escolha um nome para sua primeira cidade: \n");
     scanf("%s", cidade1);

    printf("Escolha o número de habitantes da cidade: \n");
     scanf("%lu", &quantidade_populacao1);

    printf("Escolha a área da cidade (km²): \n");
     scanf("%f", &area_cidade1);

    printf("Escolha o Produto Interno Bruto da sua cidade (bilhões de reais): \n");
     scanf("%f", &PIB1);

    printf("Escolha a quantidade de pontos turísticos de sua cidade: \n");
     scanf("%d", &quantidade_pontos_turisticos1);

    // Cálculo da Densidade Populacional e PIB per capta da Carta 1:
    densidade_populacao1 = quantidade_populacao1 / area_cidade1;
    PIB_perCapta1 = PIB1 / quantidade_populacao1;

    // Criação da segunda carta:
    printf("Sua primeira carta está pronta! Vamos agora criar a segunda carta! \n");

    printf("Escolha uma letra de A a H para seu estado: \n");
     scanf(" %c", &estado2);

    printf("Escolha um número de 01 a 04 para o código de sua carta: \n");
     scanf("%s", codigo_carta2);

    printf("Escolha um nome para sua segunda cidade: \n");
     scanf("%s", cidade2);

    printf("Escolha o número de habitantes da cidade: \n");
     scanf("%lu", &quantidade_populacao2);

    printf("Escolha a área da cidade (km²): \n");
     scanf("%f", &area_cidade2);

    printf("Escolha o Produto Interno Bruto da sua cidade (bilhões de reais): \n");
     scanf("%f", &PIB2);

    printf("Escolha a quantidade de pontos turísticos de sua cidade: \n");
     scanf("%d", &quantidade_pontos_turisticos2);

    // Cálculo da Densidade Populacional e PIB per capta da Carta 2:
    densidade_populacao2 = quantidade_populacao2 / area_cidade2;
    PIB_perCapta2 = PIB2 / quantidade_populacao2;

    // Exibição das duas cartas:
    printf("Veja as duas cartas que você criou: \n");
    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", quantidade_populacao1);
    printf("Área: %.2f km²\n", area_cidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", quantidade_pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacao1);
    printf("PIB per Capta: %.5f\n", PIB_perCapta1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo_carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", quantidade_populacao2);
    printf("Área: %.2f km²\n", area_cidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", quantidade_pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacao2);
    printf("PIB per Capta: %.5f\n", PIB_perCapta2);
    printf("\n");

    // Cálculo do Super Poder:
   super_poder1 = (float)quantidade_populacao1 + area_cidade1 + PIB1 + quantidade_pontos_turisticos1 +  PIB_perCapta1 - densidade_populacao1;
   super_poder2 = (float)quantidade_populacao2 + area_cidade2 + PIB2 + quantidade_pontos_turisticos2 +  PIB_perCapta2 - densidade_populacao2;
    

   // Comparação e exibição dos poderes de cada carta:
   printf("### Compare os poderes de suas cartas ###\n");
   printf("\n");

    if (quantidade_populacao1 > quantidade_populacao2) {
        printf("População: Carta 1 venceu (1)\n"); }
    else {
        printf("População: Carta 2 venceu (0)\n"); }

    if (area_cidade1 > area_cidade2) {
        printf("Área: Carta 1 venceu (1)\n"); }
    else {
        printf("Área: Carta 2 venceu (0)\n"); }

    if (PIB1 > PIB2) {
        printf("PIB: Carta 1 venceu (1)\n"); }
    else {
        printf("PIB: Carta 2 venceu (0)\n"); }

    if (quantidade_pontos_turisticos1 > quantidade_pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n"); }
    else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n"); }

    if (densidade_populacao1 < densidade_populacao2) {
        printf("Densidade Demográfica: Carta 1 venceu (1)\n"); }
    else {
        printf("Densidade Demográfica: Carta 2 venceu (0)\n"); }

    if (PIB_perCapta1 > PIB_perCapta2) {
        printf("PIB per capta: Carta 1 venceu (1)\n"); }
    else {
        printf("PIB per capta: Carta 2 venceu (0)\n"); }

    if (super_poder1 > super_poder2) {
        printf("Super Poder: Carta 1 venceu (1)\n"); }
    else {
        printf("Super Poder: Carta 2 venceu (0)\n"); }
   printf("\n");

    // Início do jogo:
    printf("$$$ Jogo do SUPER TRUNFO $$$\n");

    printf("Selecione 1 para jogar ou 2 para sair.\n");
    printf("1 - Jogar\n");
    printf("2 - Sair\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
     printf("Escolha um atributo para comparar entre os países e ver qual será o ganhador!\n");
     printf("%c%s x %c%s\n", estado1, codigo_carta1, estado2, codigo_carta2); 
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade demográfica\n");

     scanf("%d", &atributo); 
     switch (atributo) {

        case 1:
         printf("%lu x %lu\n", quantidade_populacao1, quantidade_populacao2);
          if (quantidade_populacao1 > quantidade_populacao2) {
           printf("O país %c%s venceu com maior pontuação no atributo População!", estado1, codigo_carta1); }
          else {
           printf("O país %c%s venceu com maior pontuação no atributo População!", estado2, codigo_carta2);}
        break;

        case 2:
         printf("%f x %f\n", area_cidade1, area_cidade2);
          if (area_cidade1 > area_cidade2) {
           printf("O país %c%s venceu com maior pontuação no atributo Área!", estado1, codigo_carta1); }
          else {
           printf("O país %c%s venceu com maior pontuação no atributo Área!", estado2, codigo_carta2); }
        break;
        
        case 3:
         printf("%f x %f\n", PIB1, PIB2);
          if (PIB1 > PIB2) {
           printf("O país %c%s venceu com maior pontuação no atributo PIB!", estado1, codigo_carta1); }
          else {
           printf("O país %c%s venceu com maior pontuação no atributo PIB!", estado2, codigo_carta2); }
        break;

        case 4:
         printf("%d x %d\n", quantidade_pontos_turisticos1, quantidade_pontos_turisticos2);
          if (quantidade_pontos_turisticos1 > quantidade_pontos_turisticos2) {
           printf("O país %c%s venceu com maior pontuação em Pontos turísticos!", estado1, codigo_carta1); }
          else {
           printf("O país %c%s venceu com maior pontuação em Pontos turísticos!", estado2, codigo_carta2);}
        break;

        case 5:
         printf("%f x %f\n", densidade_populacao1, densidade_populacao2);
          if (densidade_populacao1 < densidade_populacao2) {
           printf("O país %c%s venceu com menor densidade demográfica!", estado1, codigo_carta1); }
          else {
           printf("O país %c%s venceu com menor densidade demográfica!", estado2, codigo_carta2);}
        break;

        default:
         printf("Opção de atributo inválida. Tente novamente");
     }
    } else if (opcao == 2) {
     printf("Você escolheu sair do jogo. Até a próxima!");
    } else {
     printf("Opção inválida. Tente novamente");
    }

    return 0;
}