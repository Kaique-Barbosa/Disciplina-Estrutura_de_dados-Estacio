#include <stdio.h>

// tipedef struct Alunos{}
// Para criar um tipo e não precisar utilizar o struct ao definir uma variavel desse tipo

// atividade -------------------

/*
Crie uma struct chamada Aluno contendo
os campos: nome (string), idade (int)
e nota (float). No programa principal, declare
uma variável dessa struct, atribua
valores e imprima os dados na tela.
---
*/

int main() {
#include <stdio.h>
#include <string.h>

// Criando a struct
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    // Declarando uma variável do tipo struct Aluno
    struct Aluno aluno1;

    // Atribuindo valores
    strcpy(aluno1.nome, "Joao");
    aluno1.idade = 20;
    aluno1.nota = 8.5;

    // Imprimindo os dados
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.2f\n", aluno1.nota);

    return 0;
}
    return 0;
}




