#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int posicao;      // Nível Novato - Posicionamento dos Navios
   
   char linha[10] = {"A", "B", "C," "D", "E", "F", "G", "H", "I", "J"}; 
   int tabuleiro[10][10] = {   // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 3, 3, 3, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},

   }
   printf("A posiçao do navio 1 %s é: %s, %s, %s ... \n", tabuleiro[linha][0], tabuleiro[linha][1], tabuleiro[linha][2]);
   
   
   // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    

    return 0;
}
