#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int algo1(int, int);
int algo2(int, int, int);
int algo3();
int algo4();
int algo5();
int algo6();

void printa_array(char*);
void eh_consoante_ou_vogal(char*);

int main(void) {

    /**
     * @brief algorothm 1
     * int resultado = algo1(3,4);
       printf("%d " "", resultado);

     */

    //printf("O maior valor é%d " "", algo2(1, 2, 4)); algo2


    //printf("O resultado é %d " "", algo3( 2, 4)); algo3

    algo5();


    return 0;

}


int algo1(int a, int b ) {

    return (a+b);

}
int algo2(int a, int b, int c) {
    int maior;
    maior = a;
    if(b > a && b > c) {
        maior = b;
    }
    else if(c > a && c > b) {
        maior = c;
    }
    return maior;
}

int algo3(int a, int b) {
    int resultado;
    for(int i = 0; i < b; i++){
        resultado += a;
    }
    return resultado;

}

int algo4() {
  char *palavra, letra;
  palavra = (char*)malloc(10*sizeof(char)); // alocando memória para 10 caracteres
  printf("Entre com os caracteres: ");
  for(int i = 0; i < 10; i ++) {
   scanf("%c", &letra);
   palavra[i] = letra;
  }
  printa_array(palavra);
  eh_consoante_ou_vogal( palavra);
  
}


void eh_consoante_ou_vogal(char* palavra){
  int vogais = 0, consoantes = 0;
  for(int i = 0; i < 10; i++) {
    char letra = palavra[i];
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){ //single quotes é para caracteres
        vogais++;
    } else{
        consoantes++;
    }
  }

  printf("\nA quantidade de vogais é: %d", vogais);
  printf("\nA quantidade de consoantes é: %d", consoantes);

}

 void printa_array(char* palavra) {
    printf("[");
    for(int i = 0; i < 10; i++) {
        printf("%c """, palavra[i]);
    }
    printf("]");
 }
 
int algo5() {
    char *nome;
    printf("Entre o seu nome: ");
    scanf(" %ms", &nome);

   // nome = (char*)malloc(arrsize(sizeof(char)));
   printf("O meu nome:  %s\n", nome);
   free(nome);
}
