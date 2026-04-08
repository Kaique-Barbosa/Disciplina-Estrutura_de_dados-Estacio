#include <stdio.h>
#include <stdlib.h>

//desafio free fire


#define MAX_VALOR 100

int Procurar(int *v, int valor){
        int pos=0;
        for(int indice=0; indice<MAX_VALOR; indice++){
            if(v[indice]==valor){
                pos=indice;
                return(pos);
            }
            return(-1);
        }
}

int main() {
    int *V = malloc(MAX_VALOR*sizeof(int));

    for(int i =0; i<MAX_VALOR; i++){
        V[i] = (i+1)*10;
        printf("%d \n", V[i]);
    }
    
    
    int busca= 0;
    printf("Informe o valor a buscar");
    scanf("%d ", &busca);
    printf("Posição: %d\n", Procurar(V, busca));
}
