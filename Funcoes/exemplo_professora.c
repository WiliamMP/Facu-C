#include <stdio.h>

void inserir(int a[]){ // void n retorna nada, e [] define um vetor
    int i;
    for(i=0;i<3; i++){
        printf("\n Digite o valor %d ", i);
        scanf("%d", &a[i]);
    }

}

void imprimir(int b[]){
    int i;

    for(i=0;i<3;i++){
        printf("\n Numeros[%d] = %d", i, (2*b[i]));
    }
}


int main(int argc, char** argv){
    int numero[3];
    printf("\n Preenchendo o vetor: \n");
    inserir(numero);

    printf("\n Valor final:");
    imprimir(numero);
}