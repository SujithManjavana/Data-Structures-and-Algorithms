#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node *next;
}
node;

//prototypes
void addNode(int num);
void printList();
void freeMemory();

//declaring list as global variable
node *list = NULL;

int main(void){
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);

    printList();
    freeMemory();
    return 0;

}

//this function will add a new node to the beginning of the linked list
void addNode(int num){
    node *n = malloc(sizeof(node));
    if(n == NULL) return;
    n -> number = num; //same as *n.number = num;
    n -> next = list;
    list = n;
}

void printList(){
    for (node *i = list; i != NULL; i = i -> next){
         printf("number in node is %i\n",i -> number);
    }
}

//free all nodes one by one
void freeMemory(){
    while(list != NULL){
        node *tmp = list -> next;
        printf("freeing node %i\n",list -> number);
        free(list);
        list = tmp;
    }
}
