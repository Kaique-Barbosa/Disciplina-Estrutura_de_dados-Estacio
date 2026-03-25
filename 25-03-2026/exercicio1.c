#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void teste_crescimento_mais1(int n){

    int capacidade = 1;
    int *lista = malloc(capacidade * sizeof(int));
    int total = 0;

    clock_t inicio = clock();

    for(int i=0;i<n;i++){

        if(total == capacidade){
            capacidade = capacidade + 1;
            lista = realloc(lista, capacidade*sizeof(int));
        }

        lista[total++] = i;
    }

    clock_t fim = clock();

    printf("Crescimento +1: %f segundos\n",
           (double)(fim-inicio)/CLOCKS_PER_SEC);

    free(lista);
}

void teste_crescimento_mais10(int n){

    int capacidade = 10;
    int *lista = malloc(capacidade*sizeof(int));
    int total = 0;

    clock_t inicio = clock();

    for(int i=0;i<n;i++){

        if(total == capacidade){
            capacidade = capacidade + 10;
            lista = realloc(lista, capacidade*sizeof(int));
        }

        lista[total++] = i;
    }

    clock_t fim = clock();

    printf("Crescimento +10: %f segundos\n",
           (double)(fim-inicio)/CLOCKS_PER_SEC);

    free(lista);
}

void teste_crescimento_dobro(int n){

    int capacidade = 10;
    int *lista = malloc(capacidade*sizeof(int));
    int total = 0;

    clock_t inicio = clock();

    for(int i=0;i<n;i++){

        if(total == capacidade){
            capacidade = capacidade * 2;
            lista = realloc(lista, capacidade*sizeof(int));
        }

        lista[total++] = i;
    }

    clock_t fim = clock();

    printf("Crescimento x2: %f segundos\n",
           (double)(fim-inicio)/CLOCKS_PER_SEC);

    free(lista);
}

int main(){

    const long long N = 2000000LL;
    
    teste_crescimento_mais1(N);
    teste_crescimento_mais10(N);
    teste_crescimento_dobro(N);

}