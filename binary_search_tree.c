#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <stdbool.h> // required for type bool

typedef struct node{
    int number;
    struct node *left;
    struct node *right;
}
node;

//binary search
bool search(node *tree, int num){
    if(tree == NULL){
        return false; //end of leaf
    }

    if(tree -> number < num){
        return search(tree -> right, num);
    }
    else if(tree -> number > num){
        return search(tree -> left, num);
    }
    else{
        return true; // found
    }
}

void addNode(node *tree, int num){
    if(tree == NULL){
        return;
    }
    node *n = malloc(sizeof(node));
    if(n == NULL){
        return;
    }
    
    //add the number to newely created node
    n -> number = num;
    //add to right
    if(num > tree -> number){
        if(tree -> right == NULL)
        tree -> right = n;
        else
        addNode(tree -> right, num);
    }
    //add to left
    else if(num < tree -> number){
        if(tree -> left == NULL)
        tree -> left = n;
        else
        addNode(tree -> left, num);
    }
}

int main(void){
    //create root node
    node *tree = malloc(sizeof(node));
    tree -> number = 10;
    tree -> left = NULL;
    tree -> right = NULL;

    addNode(tree, 2);
    addNode(tree, 9);
    addNode(tree, 2);
    addNode(tree, 6);
    addNode(tree, 23);
    addNode(tree, 34);
    addNode(tree, 43);
    addNode(tree, 56);
    addNode(tree, 12);
    
    int lookingFor = get_int("Enter the number you want to search in the tree: ");
    
    if(search(tree, lookingFor) == true){
        printf("found %i\n", lookingFor);
    }else{
        printf("not found %i\n", lookingFor);
    }
    return 0;
}
