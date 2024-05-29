#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM10 10
#define TAM5 5


void algo1();
void algo2();
void algo3();
void algo4();
void algo5();
void algo6();
void algo7();
void algo8();
void algo9();
void algo10();
void algo11();
void printar_vetor_tam5(int vetor[]);
void printar_vetor_contrario(int vetor[]);

void main(void) {



    
    algo11();
    


}



void printar_vetor_tam5(int vetor[]) {

    printf("[");
    for(int i = 0; i < 5; i++) {
        printf("%d " "", vetor[i]);
    }
    printf("]");
}


void printar_vetor_tam10(int vetor[]) {

    printf("[");
    for(int i = 0; i < 10; i++) {
        printf("%d " "", vetor[i]);
    }
    printf("]");
}

void printar_vetor_contrario(int vetor[]) {
    printf("[");
    for(int i = 5; i >= 0; i--) {
        printf("%d " "",vetor[i]);
    }
    printf("]");
}

void algo1() {
        int vetor[TAM5];
        for(int i = 0; i <= TAM5; i++) {
            vetor[i] = i;
        }
         printar_vetor_tam5(vetor);
}

void algo2() {
    int vetor[TAM5];
    for(int i = 1; i <= TAM5; i++) {
        vetor[i] = i;
    }
    printar_vetor_contrario(vetor);
}

void algo3() {

 int vetor[TAM10], valor;

 printf("Entre os valores do seu vetor:");

 for(int i = 0; i < TAM10; i++) {
   scanf("%d", &valor);
   vetor[i] = valor*2;
 }
 printar_vetor_tam10(vetor);

}

void algo4() {

    int vet1[TAM5], vet2[TAM5], valor;

    printf("Quantos valores você quer?\n");
    
    for(int i = 0; i < TAM5; i++) {
        scanf("%d", &valor);
        vet1[i] = valor;
        vet2[i] = (valor*2);
    }
     printar_vetor_tam5(vet1);
     printar_vetor_tam5(vet2);
}



void algo5() {

    int vet1[TAM5], vet2[TAM5], valor;

    printf("Quantos valores você quer?\n");

    int r = 4;

    for(int i = 0; i < TAM5; i++) {
        scanf("%d", &valor);
        vet1[i] = valor; 
        vet2[r] = vet1[i]; // fazendo o ultimo elemento do vet2 receber o primeiro elemento do vet1
        r --;
    }
      
    printar_vetor_tam5(vet1);
    printar_vetor_tam5(vet2);

    }    


void algo6() {

     int vetor[TAM5], menor, valor;
        for(int i = 0; i < TAM5; i++) {
            scanf("%d", &valor);
            vetor[i] = valor;
        }
     menor = vetor[0];
    
        for(int i = 0; i < TAM5; i++) {
           if ( vetor[i] < menor ) {
            menor = vetor[i];
           }
        }
 
    printf("O menor valor é - %d", menor);

} 

void algo7() {

    int vetor[TAM5], valor;
    printf("Entre um valor qualquer - " "");
    scanf("%d", &valor);
    vetor[0] = valor;

    for(int i = 1; i < TAM5; i++) {
        vetor[i] = vetor[i-1]*2;
    }   

    printar_vetor_tam5(vetor);
}

void algo8() {

    int vetor[TAM10], vl1, vl2;
    printf("Entre um valor qualquer - " "");
    scanf("%d", &vl1);
    vetor[0] = vl1;
    printf("Entre outro valor qualquer - " "");
    scanf("%d", &vl2);
    vetor[1] = vl2;

    for(int i = 2; i < TAM10; i++) {
        vetor[i] = vetor[i-1] + vetor[i-2];
    }   

    printar_vetor_tam10(vetor);

}

void algo9() {

    int vetor[TAM10], vl,r;  
    r=1; // declarando variávei para a volta
    printf("Entre um valor qualquer\n");
    scanf("%d", &vl);
    for (int i = 0; i < TAM10; i++) {
        if (i < 5) {
            vetor[i] = vl + i; //preenchendo a primeira metade do vetor
        } else {
          vetor[i] = vl + 5 - r; // fazendo a segunda metade do algoritmo
          r++;
        }
}    
printar_vetor_tam10(vetor); 

}


void algo10() {

    int vetor[TAM10], vl,r,s;  
     // declarando variável para a volta no vetor
   r=9;
   s = 0;
    for (int i = 0; i < TAM10; i++) { 
        printf("Entre o valor %dº " "", i);
        scanf("%d", &vl);
        if(i % 2 == 0) {
            vetor[s] = vl;
            s++;
        } else {
          vetor[r] = vl;  
          r--;
        }
       
    }

    printar_vetor_tam10(vetor);
} 


void algo11() {
    int vt1[TAM5], vt2[TAM10], vl, r, s;
    r = 0;
    s = TAM5;
    for(int i = 0; i < TAM10; i++) { // PREENCHER VETOR TAMANHO 10
        scanf("%d", &vl);
        vt2[i] = vl;
    }
    for(int i = 0; i <TAM5; i++) { // PREENCHER VETOR TAMANHO 5

        vt1[i] = (vt2[r] + vt2[s]) / 2; //media
        r++;
        s++;
    }

    printar_vetor_tam5(vt1);
    
     
}

      
 




