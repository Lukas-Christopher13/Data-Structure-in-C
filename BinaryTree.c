#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int num;
    struct Node *nodeEsquerdo;
    struct Node *nodeDireito;
}Node;

Node *inserir(int num, Node *root)
{
    Node *node = malloc(sizeof(Node));

    node->num = num;
    node->nodeEsquerdo = NULL;
    node->nodeDireito = NULL;

    if(root == NULL){
        root = node;

    } else {
        Node *aux = root;

        while (1)
        {
            if(num > aux->num){
                if(aux->nodeDireito == NULL){
                    aux->nodeDireito = node;
                    return root;

                } else{
                    aux = aux->nodeDireito; 
                }

            } else {
                if(aux->nodeEsquerdo == NULL){
                    aux->nodeEsquerdo = node;
                    return root;

                } else {
                    aux = aux->nodeEsquerdo;

                }
                
            }
        }
    }
    return root;
}

int buscar();


int main()
{
    int i;

    int vetor[] = {1,3,4,7,1,5,2,3,22,42};

    Node *root = NULL;


    for(i = 0; i < 10;i++){
        root = inserir(vetor[i],root);
    }


    return 0;
}


