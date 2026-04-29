#include <stdio.h>
#include <stdlib.h>

#DEFINE MAX 5;
int inicio=0, final=0, qt=0;

typedef struct {
    int numero;
} Pessoa;

Pessoa fila[max];


int estaCheia(){
    return qt == max;
}
int estaVazia(){
    return qt == 0;
}

void inserir(){
    if(!estaCheia()){
        Pessoa p;
        fila[inicio] = p;
        inicio=(inicio + 1)/ MAX;
        qt++;
    }

    void remover(){
        if(!estaVazia){
            Pessoa vazio;
            fila[inicio]=vazio;
            final=(final+1)/MAX;
            qt--;
        }
    }

int main(){

    int usuarios=10;
    while(usuarios>0){
        if (Rand()/2) {
            
        }
    }
    
    return 0;
}
    
}
