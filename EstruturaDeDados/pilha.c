// são do tipo LIFO(last-in first-out)
// onde o último elemento a ser inserido, será o primeiro a ser retirado.


// operações básicas
// Push() - Empilhar
// Pop() - Desempilhar

#include <stdio.h>
#include <stdlib.h>

struct Pilha{
    int Topo;
    int capacidade;
    float *proxElem;
};

void cria_pilha(struct Pilha *p, int c){
    p->proxElem = (float*) malloc(c *sizeof(float));
    p->Topo = -1;
    p->capacidade = c;
};

void push_pilha(struct Pilha *p, float v){
    p->Topo++;
    p->proxElem[p->Topo] = v;
};

float pop_pilha(struct Pilha *p){
    float aux = p->proxElem[p->Topo];
    p->Topo--;
    return aux;
};

int main(){
    struct Pilha minhaPilha;
}