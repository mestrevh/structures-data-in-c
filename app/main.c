#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"
#include "list.h"
#include "stack.h"
#include "queue.h"

void loop_list(node *list)
{
    int op;

    while (1)
    {
        printf("\nLista opcoes:\n\n");
        printf("1 - Adicionar;\n");
        printf("2 - Remover;\n");
        printf("3 - Pertence;\n");
        printf("4 - Imprimir;\n");
        printf("0 - Sair;\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:        
                
                int elem;
                printf("Digite um numero inteiro: ");
                scanf("%d", &elem);

                list = add_node(list, elem);
                print_list(list);
                printf("\n");

                break;
            
            case 2:

                int remove;
                printf("Digite um numero inteiro para remover da lista: ");
                scanf("%d", &remove);

                list = rm_node(list, remove);

                print_list(list);
                printf("\n");

                break;
            case 3:

                int contains;
                printf("Digite um numero inteiro que deseja saber se pertence: ");
                scanf("%d", &contains);

                if (search_list(list, contains))
                {
                    printf("Pertence\n");
                }
                else
                {
                    printf("Nao pertece\n");
                }
                
                print_list(list);
                printf("\n");

                break;
            case 4: 
                
                print_list(list);
                printf("\n");

                break;
            case 0:
                printf("\n######################   Fim da sessao lista   ##################\n");
                return;
            default:
                printf("Digite uma opcao valida\n");
                break;
        }
    }
}

void loop_stack (stack *s)
{

    int op;

    while (1)
    {
        printf("\nPilha opcoes:\n\n");
        printf("1 - Empilhar;\n");
        printf("2 - Desempilhar;\n");
        printf("3 - Topo;\n");
        printf("4 - Imprimir;\n");
        printf("0 - Sair;\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:        
                
                int elem;
                printf("Digite um numero inteiro: ");
                scanf("%d", &elem);

                s = push(s, elem);
                print_stack(s);
                printf("\n");

                break;
            
            case 2:

                s = pop(s);
                print_stack(s);
                printf("\n");

                break;
            case 3:
                
                peek(s);
                printf("\n");

                break;
            case 4: 
                
                print_stack(s);
                printf("\n");

                break;
            case 0:
                printf("\n######################   Fim da sessao lista   ##################\n");
                return;
            default:
                printf("Digite uma opcao valida\n");
                break;
        }
    }
}

void loop_queue (queue *q)
{

    int op;

    while (1)
    {
        printf("\nPilha opcoes:\n\n");
        printf("1 - Enfileirar;\n");
        printf("2 - Desenfileirar;\n");
        printf("3 - Imprimir;\n");
        printf("0 - Sair;\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:        
                
                int elem;
                printf("Digite um numero inteiro: ");
                scanf("%d", &elem);

                q = enqueue(q, elem);
                print_queue(q);
                printf("\n");

                break;
            
            case 2:

                q = dequeue(q);
                print_queue(q);
                printf("\n");

                break;
            case 3: 
                
                print_queue(q);
                printf("\n");

                break;
            case 0:
                printf("\n######################   Fim da sessao lista   ##################\n");
                return;
            default:
                printf("Digite uma opcao valida\n");
                break;
        }
    }
}

void loop_binary_tree(bt *root)
{
    int op;

    while (1)
    {
        printf("\nArvore binaria opcoes:\n\n");
        printf("1 - Adicionar;\n");
        printf("2 - Remover;\n");
        printf("3 - Pertence;\n");
        printf("4 - Imprimir;\n");
        printf("0 - Sair;\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:        
                
                int elem;
                printf("Digite um numero inteiro: ");
                scanf("%d", &elem);

                root = insert_binary_tree(root, elem);
                print_binary_tree(root);
                printf("\n");

                break;
            
            case 2:
                int rm;
                printf("Digite um numero inteiro: ");
                scanf("%d", &rm);

                root = remove_binary_tree(root, rm);
                print_binary_tree(root);
                printf("\n");
                break;
            case 3:

                int contains;
                printf("Digite um numero inteiro que deseja saber se pertence: ");
                scanf("%d", &contains);

                if (search_binary_tree(root, contains))
                {
                    printf("Pertence\n");
                }
                else
                {
                    printf("Nao pertece\n");
                }
                
                print_binary_tree(root);
                printf("\n");

                break;
            case 4: 
                
                print_binary_tree(root);
                printf("\n");

                break;
            case 0:
                printf("\n######################   Fim da sessao arvore binaria   ##################\n");
                return;
            default:
                printf("Digite uma opcao valida\n");
                break;
        }
    }
}

void loop_tree(bt *root)
{
    int op;

    while (1)
    {
        printf("\nArvore nao binaria opcoes:\n\n");
        printf("1 - Adicionar;\n");
        printf("2 - Remover;\n");
        printf("3 - Pertence;\n");
        printf("4 - Imprimir;\n");
        printf("0 - Sair;\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:        
                printf("Falta\n");
                break;
            case 2:
                printf("Falta\n");
                break;
            case 3:
                printf("Falta\n");
                break;
            case 4: 
                printf("Falta\n");
                break;
            case 0:
                printf("\n######################   Fim da sessao arvore binaria   ##################\n");
                return;
            default:
                printf("Digite uma opcao valida\n");
                break;
        }
    }
}

int main ()
{

    int op = 1;

    while (op)
    {
        printf("\nMenu:\n\n");
        printf("1 - Lista;\n");
        printf("2 - Pilha;\n");
        printf("3 - Fila;\n");
        printf("4 - Arvore binaria;\n");
        printf("5 - Arvore nao binaria;\n");
        printf("0 - Sair.\n");
        printf("\nEscolha uma estrutura: ");

        scanf("%d", &op);

        switch (op)
        {
            case 1:
                loop_list(NULL);
                break;
            case 2:
                loop_stack(NULL);
                break;
            case 3:
                loop_queue(NULL);
                break;
            case 4:
                loop_binary_tree(NULL);
                break;
            case 5:
                loop_tree(NULL);
                break;
            case 0:
                printf("\n#######       TCHAUUU        ########\n");
                break;
            default:
                printf("\nDigite uma opcao valida\n");
                break;
        }
    }

    printf("#######    FIM DO PROGRAMA   ########\n");
    return 0;
}