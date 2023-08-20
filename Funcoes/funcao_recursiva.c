#include <stdio.h>

int fatorial(int valor){
    if(valor != 1){
        printf("%d \n", valor);
        return valor * fatorial(valor -1);
    } else {
        return valor;
    }
}

int fibonacci(int n){
    if (n == 0){ // condição de parada
        return 0;
    } else {
        if(n == 1){ // segunda condição de parada
            return 1;
        } else {
            printf("%d \n", n);
            return fibonacci(n-1) + fibonacci(n-2);
        }
    }


}

int main(){
    int resultado = fatorial(120);

    printf("\n resultado: %d", resultado);

    int resultado2 = fibonacci(30);

    printf("\n resultado finbonacci: %d", resultado);

    return 0;
}