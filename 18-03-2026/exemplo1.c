// Online C compiler to run C program online
#include <stdio.h>
#include <time.h> // biblioteca de tempo

int main() {
    int vetor[1000];
    
    int *p = vetor;
    
    
    /*
    for(int i=0; i <10; i++){
    vetor[i]= 10*(i+1);
    printf("%d\n", vetor[i]);
} */

    for(int x=0; x < 10; x++){
    *(p) = (10 * x);
    printf("%d - %p\n", *p, p);
    p++;
    }

    return 0;
}