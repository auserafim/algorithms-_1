#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void algo0();
void algo1();
void algo2();
void algo3();
void algo4();
void algo5();
void algo6();
void algo7();
void algo8();
void algo9();

void printar_vetor(int vetor[]) {

    printf("[");
    for(int i = 5; i >= 1; i--) {
        printf("%d " "", vetor[i]);
    }
    printf("]");
}



int main() {

algo9();

}



void algo9() {

  int valor = 10;

  while(valor >= 0) {
   printf("[");
    for(int i = 0; i < valor; i++) {
        
        if( i%2 != 0) {
            int resultado_impar = (i*2);
            printf("%d " "", resultado_impar);
        } else {
            int resultado_par = (i/2);
            printf("%d " "", resultado_par);

        }
       

    }
   printf("]");
    break;
  }  


}

void algo8(){
    int ref, resultado, valor;

    ref = 10;

    while(ref >= 0) {
        for( int i = 0; i < 3; i++) {
            scanf("%d", &valor); 
            resultado = resultado + valor;
        }
        if(resultado > ref) {
            printf("Contanto até total da soma :[");
            for(int i = 1; i <= resultado; i++) {
                printf("%d " "", i);
            }
            printf("]");
        } 
        else {
                        printf("Contanto até valor referência : [");

             for(int i = 1; i <= ref; i++) {
                printf("%d " "", i);
            }
                                    printf("]");

        }
        break;
    }
    


}


void algo7() {
   int qtd;
   float valor, resultado, media;
   printf("Quantos valores devem ser lidos? " "");
   scanf("%d", &qtd);
    for(int i = 0; i < qtd; i++) {
        scanf("%e", &valor);
        resultado = valor + resultado; // acumulando os números
        media = resultado / qtd;
    }
   printf("A média final é: %f\n", media);

}

void algo6() { // tabuada
   int valor = 2;

    while(valor >= 0) {

        for(int i = 0; i <= 10; i++) {
         printf("\nA Tabuada é :  %d X %d = %d\n", valor, i, (valor*i));
        }
        break;
    }

}

void algo5() { // somas conssecutivas

    int vl1, vl2;
    printf("Esconha o seu valor 1:\n"); //primeiro valor
    scanf("%d", &vl1);
    printf("Esconha o seu valor 2:\n"); //segundo valor
    scanf("%d", &vl2);

    for(int i = 0; i < vl2; i++) {
        int resultado = resultado + vl1;
        printf("%d" " ", resultado);
    }



}

void algo4 () { // limite / incremento

    int limite, incremento;
    printf("Esconha o seu limite:\n");
    scanf("%d", &limite);
    printf("Esconha o seu incremento:\n");
    scanf("%d", &incremento);

     printf("{");
    for(int i = 0; i <= limite; i+=incremento) {
        printf("%d " "", i);
    }        
     printf("}");

}


void algo3() {
    int valor;
    scanf("%d", &valor);
 
    while(valor >= 0) {
        printf("[");

        for (int i = 0; i <= valor; i++) {
            printf("%d " " ", i);

        }
            printf("]");
        break;     
    }
    
        
}


void algo2() {
    printf("[");

for (int i = 10; i >= 1; i--) {
    printf("%d " " ", i);

}
    printf("]");

}

void algo1() {
 
    printf("[");

 for(int i = 0; i <= 5; i++) {
    printf("%d " " ", i);
 }

    printf("]");

}


void algo0() {

    int nota1, nota2, nota3, media, menor_nota;
    printf("Ente todas as suas notas: \n");
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    menor_nota = nota1;

    if(nota2 < nota1) {
        menor_nota = nota2;
    } 
    else if (nota3 < nota1) {
        nota3 = menor_nota;
    }

    if(media < 5 ) {
        printf("Abandone a disciplina. ATENÇÃO PARA A DISCIPLINA DE NOTA %d", menor_nota);
    } else if((media > 5) && (media <= 7)) {
        printf("[ALERTA]. Você está mediano\n");
    } else {
        printf("Parabéns");
    }
}
