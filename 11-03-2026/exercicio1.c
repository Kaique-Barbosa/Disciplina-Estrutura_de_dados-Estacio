
#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    
    for(int i=0; i < 10; i++){
        vetor[i] = rand();
        printf("%d \t", vetor[i]);
    }
    
    return 0;
}