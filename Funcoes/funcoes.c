#include <stdlib.h>
#include <stdio.h>

int* gerarRandomico(){ // pointeiro do tipo inteiro int*
    
    static int r[10]; // instanciando um vetor statico do tipo inteiro com 10 indices
    int a; // variavel inteira a

    for (a = 0; a < 10; ++a){ // estrutura de repetição para cada vez rodar aumentar a variavel 'a' até a ser maior q 10
        r[a] = rand(); // gerando número randomico e alocando ele num indice do vetor instanciado logo acima
        printf("r[%d] = %d\n", a, r[a]); // dando print, mostrando posição do indice e o valor
    }

    return r; // retornando vetor
}

int testar(){
    int x = 10;
    return x;
}

// variavel global 
int b = 30;

int main(){
    gerarRandomico();
    
    int x = 20;

    printf("\n Valor x dentro do scopo main() %d", x);

    printf("\n Valor x dentro do scopo testar() %d", testar());

    printf("\n Valor b da variavel global %d", b);

    return 0;
}