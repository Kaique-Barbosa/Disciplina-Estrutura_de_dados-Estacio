/*Descrição
A árvore guarda os palpites do jogador. O programa sorteia um número secreto (1 á 100) e o jogador tenta adivinhar.

Revisão de:
- Inserir valores na árvore binária
- Buscar valores
- Efetuar um Percurso em ordem (InOrder)
*/

//----------------------------------------------------
// Estrutura base: 
// Gerar número secreto (aleatório):

#include <time.h>

// Inicializa a semente do gerador aleatório
srand(time(NULL));  // Usa o relógio como semente
    
// Gera número entre 1 e 100
int secreto = rand() % 100 + 1;

// Estrutura dos números de palpite:
typedef struct No {
    int valor;
    struct No* esq;
    struct No* dir;
} No;

// Funções para implementar:
No* inserir(No* raiz, int palpite);
int busc
ar(No* raiz, int palpite);
void historico(No* raiz);  // mostra palpites em ordem

/*
// ------ Exemplo uso: ---------
JOGO: Adivinhe o número (1 a 100)
Palpite 1: 50
[x] Muito baixo! (palpite salvo na árvore)

Palpite 2: 75
[X] Muito alto!

Palpite 3: 62
ACERTOU em 3 tentativas!

Palpites em ordem: 50 - 62 - 75 - 
*/