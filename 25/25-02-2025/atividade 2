// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
  
    struct Pessoas {
        char nome[50];
        int idade;
        float altura;
    };
  
  int max = 2;
 
  struct Pessoas listaPessoas[max];
  
  for(int x=0; x < max; x++){
      printf("Digite o nome: ");
      scanf("%s", &listaPessoas[x].nome);
      printf("Digite a idade: ");
      scanf("%d", &listaPessoas[x].idade);
  }
  
  
  //--------- LISTAR ------------
  
    printf("------------------------ \n");
    for(int x=0; x < max; x++){
      printf("Nome: %s \n", listaPessoas[x].nome);
      printf("Idade: %d \n", listaPessoas[x].idade);
  }
    printf("------------------------ \n");
  
  
    return 0;
}
