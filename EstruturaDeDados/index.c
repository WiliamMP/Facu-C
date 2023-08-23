// lista

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int dado;
    struct Node *next;
};

void insere_inicio(struct Node** inicio_ref, int new_dado){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); // criei um novo endereço de memoria para inserir dado

    new_node->dado = new_dado; // valor do dado 
    new_node->next = (*inicio_ref);
    (*inicio_ref) = new_node; // inicio_ref é o inicio passado por parametro, já q o parametro vindo vai ser NULL 
}


int main(){
    struct Node* inicio = NULL; // Cria uma nova lista setada em NULL, ou seja, não possui valores

    insere_inicio(&inicio, 7); // atribuindo valor ao inicio da lista criada com struct
}


