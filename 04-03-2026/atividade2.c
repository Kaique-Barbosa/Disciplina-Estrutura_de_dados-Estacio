#include <stdio.h>

// tipedef struct Alunos{}
// Para criar um tipo e não precisar utilizar o struct ao definir uma variavel desse tipo

// atividade -------------------

/*

Crie uma struct chamada Produtos com os
campos: codigo (int), descricao
(string) e preco (float). Crie uma
função que receba uma struct Produtos
como parâmetro e imprima seus dados.
*/

#include <stdio.h>
#include <string.h>

// Criando a struct
struct Produtos {
    int codigo;
    char descricao[100];
    float preco;
};

// Função que recebe a struct como parâmetro
void imprimirProduto(struct Produtos p) {
    printf("Codigo: %d\n", p.codigo);
    printf("Descricao: %s\n", p.descricao);
    printf("Preco: R$ %.2f\n", p.preco);
}

int main() {
    // Criando variável do tipo Produtos
    struct Produtos produto1;

    // Atribuindo valores
    produto1.codigo = 101;
    strcpy(produto1.descricao, "Notebook");
    produto1.preco = 3500.90;

    // Chamando a função
    imprimirProduto(produto1);

    return 0;
}


