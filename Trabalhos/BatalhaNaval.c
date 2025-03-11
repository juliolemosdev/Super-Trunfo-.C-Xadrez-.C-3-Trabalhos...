#include <stdio.h>
#include <stdlib.h>

 // Tema 4 - Batalha Naval
 // Aluno Kauã de Sousa Ferreira
 // Nível Mestre

// Constantes para os tipos de células no tabuleiro
#define AGUA 0
#define NAVIO 3
#define HABILIDADE_AREA 5

// Inicializa o tabuleiro com água (0)
void inicializar_tabuleiro(int tabuleiro[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
}

// Cria a matriz da habilidade em forma de cone
void criar_cone(int habilidade[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // Define o padrão do cone: 1 na primeira linha, 3 na segunda, 5 na terceira
            if (i == 0 && j == 2) {
                habilidade[i][j] = 1; // Topo do cone
            } else if (i == 1 && j >= 1 && j <= 3) {
                habilidade[i][j] = 1; // Expansão para 3
            } else if (i == 2 && j >= 0 && j <= 4) {
                habilidade[i][j] = 1; // Expansão para 5
            } else {
                habilidade[i][j] = 0; // Fora do cone
            }
        }
    }
}

// Cria a matriz da habilidade em forma de Cruz
void criar_cruz(int habilidade[5][5]) {
    int centro = 2; // Centro da matriz 5x5
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            habilidade[i][j] = (i == centro || j == centro) ? 1 : 0;
        }
    }
}

// Cria a matriz da habilidade em forma de octaedro
void criar_octaedro(int habilidade[5][5]) {
    // Inicializa toda a matriz com 0
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            habilidade[i][j] = 0;
        }
    }

    // Define o padrão do octaedro
    habilidade[1][2] = 5; // Centro
    habilidade[2][1] = 5; // Esquerda
    habilidade[2][2] = 5; // Centro
    habilidade[2][3] = 5; // Direita
    habilidade[3][2] = 5; // Inferior
}

// Posiciona um navio de tamanho 3 no tabuleiro
void posicionar_navio(int tabuleiro[10][10], int linha, int coluna, int orientacao) {
    if (orientacao == 0) { // Horizontal
        for (int i = 0; i < 3; i++) {
            if (coluna + i < 10) {
                tabuleiro[linha][coluna + i] = NAVIO;
            }
        }
    } else if (orientacao == 1) { // Vertical
        for (int i = 0; i < 3; i++) {
            if (linha + i < 10) {
                tabuleiro[linha + i][coluna] = NAVIO;
            }
        }
    } else { // Diagonal
        for (int i = 0; i < 3; i++) {
            if (linha + i < 10) {
                tabuleiro[linha + i][coluna + i] = NAVIO;
            }
        }
    }

}

// Sobrepõe a matriz de habilidade no tabuleiro, centrada nas coordenadas informadas
void aplicar_habilidade(int tabuleiro[10][10], int habilidade[5][5], int origem_linha, int origem_coluna) {
    int deslocamento = 2; // Deslocamento para centralizar a matriz 5x5
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int linha_tabuleiro = origem_linha + (i - deslocamento);
            int coluna_tabuleiro = origem_coluna + (j - deslocamento);

            // Verifica se a posição está dentro dos limites do tabuleiro
            if (linha_tabuleiro >= 0 && linha_tabuleiro < 10 &&
                coluna_tabuleiro >= 0 && coluna_tabuleiro < 10) {

                // Se a posição na matriz de habilidade for diferente de 0, aplica no tabuleiro
                if (habilidade[i][j] != 0) {
                    tabuleiro[linha_tabuleiro][coluna_tabuleiro] = HABILIDADE_AREA;
                }
            }
        }
    }
}

// Exibe o tabuleiro com valores numéricos
void exibir_tabuleiro(int tabuleiro[10][10]) {
    // Exibe letras das colunas (A-J)
    printf("   ");
    for (char letra = 'A'; letra < 'A' + 10; letra++) {
        printf("%c ", letra);
    }
    printf("\n");

    // Exibe cada linha do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Número da linha (1-10)
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Exibe o valor numérico da célula
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[10][10];
    int habilidade[5][5];

    // Inicializa o tabuleiro
    inicializar_tabuleiro(tabuleiro);

    // Posiciona navios no tabuleiro
    posicionar_navio(tabuleiro, 2, 7, 0); // Navio horizontal 
    posicionar_navio(tabuleiro, 6, 3, 1); // Navio vertical 
    posicionar_navio(tabuleiro, 5, 0, 2); // Navio diagonal
    posicionar_navio(tabuleiro, 3, 7, 2); // Navio diagonal

    // Aplica habilidade Cone centrada na posição (4,4)
    criar_cone(habilidade);
    aplicar_habilidade(tabuleiro, habilidade, 4, 4);

    // Aplica habilidade Cruz centrada na posição (7,7)
    criar_cruz(habilidade);
    aplicar_habilidade(tabuleiro, habilidade, 7, 7);

    // Aplica habilidade Octaedro centrada na posição (1,1)
    criar_octaedro(habilidade);
    aplicar_habilidade(tabuleiro, habilidade, 1, 1);

    // Exibe o tabuleiro final
    exibir_tabuleiro(tabuleiro);

    return 0;
}