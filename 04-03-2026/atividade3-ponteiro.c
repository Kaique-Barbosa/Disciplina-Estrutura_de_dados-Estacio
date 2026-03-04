// %d par inteiros
// %p para endereço (ponteiro)

#include <stdio.h>

int main() {
    int numero;        // variável inteira
    int *ponteiro;     // ponteiro para inteiro

    numero = 10;       // atribuindo valor
    ponteiro = &numero; // ponteiro recebe o endereço de numero

    printf("Valor da variavel: %d\n", numero);
    printf("Endereco da variavel: %p\n", &numero);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}

