// lista com ponteiro de memoria, esse tipo de lista tende a ser dinâmica

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

void printarLista(struct Node *node){
    while(node != NULL){ // enquanto não achar o valor NULL, ou o final da lista, ele mostra os dados de acordo com o local da memoria
        printf("%d", node->dado);
        node = node->next; // passa pro proximo
    }
}

void insere_fim(struct Node** inicio_ref, int new_dado){
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

   struct Node *ultimo = *inicio_ref;
   new_node->dado = new_dado;
   new_node->next = NULL;

   if (*inicio_ref == NULL){    
    *inicio_ref = new_node;
    return;
   }  

   while(ultimo->next != NULL){
    ultimo = ultimo->next;

    ultimo->next = new_node;
    return;
   }
}

int main(){
    struct Node* inicio = NULL; // Cria uma nova lista setada em NULL, ou seja, não possui valores

    insere_fim(&inicio, 6);
    insere_inicio(&inicio, 7); // atribuindo valor ao inicio da lista criada com struct
    insere_inicio(&inicio, 1);
    insere_fim(&inicio, 4);

    printf("\n Lista Criada: ");
    printarLista(inicio);

    // finalizar as demais operações básicas -- atividade

    return 0;

    // F
    // V
    // V
}


