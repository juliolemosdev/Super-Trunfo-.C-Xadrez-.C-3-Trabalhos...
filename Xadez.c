#include <stdio.h>

 // Tema 3 - Desafio Xadrez
 // Aluno Kauã de Sousa Ferreira
 // Nível Aventureiro

int main() {

 // Declaração das variáveis Torre e Bispo
 int i_T = 1, i_B = 1, i_R;
 int i_C;
 
 
    // Início do loop do Bispo
    printf("Movimento do Bispo\n");
    do {printf("Cima, Direita\n");
        i_B++; }
    
    while (i_B <= 5);  

printf("\n");

    // Início do loop da Torre
    printf("Movimento da Torre\n");
    while (i_T <= 5) {
        printf("Direita\n");
        i_T++; }

printf("\n");

   // Início do loop da Rainha
   printf("Movimento da Rainha\n");
   for (i_R = 1; i_R <= 8; i_R++) {
    printf("Esquerda\n"); }
    
printf("\n");

   // Início do loop do Cavalo
   printf("Movimento do Cavalo\n");

   // Loop externo
  while (i_C < 2) {
    // Loop interno
    for (i_C = 0; i_C < 2; i_C++) {
        printf("Baixo\n"); } } 
        
        printf("Esquerda\n");
    
return 0;
}