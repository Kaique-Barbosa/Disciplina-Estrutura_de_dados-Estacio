#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} No;

void main() {
    No *n1 = malloc( sizeof(No) );
    No *n2 = malloc( sizeof(No) );
    No *n3 = malloc( sizeof(No) );

    n1->valor = 3;
    n2->valor = 10;
    n3->valor = 18;

    n1->prox = n2;
    n2->prox = n3;
    n3->prox = NULL;
    
    No *atual = n1;

    while( atual != NULL) {
        printf("%d -", atual->valor);
        atual = atual->prox;
    }   
}