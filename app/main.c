#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

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

                root = insert(root, elem);
                print_binary_tree(root);
                printf("\n");

                break;
            
            case 2:
                printf("Nao implementado ainda\n");
                break;
            case 3:

                int contains;
                printf("Digite um numero inteiro que deseja saber se pertence: ");
                scanf("%d", &contains);

                if (search(root, contains))
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
                printf("Fim da secao arvore binaria\n");
                return;
            default:
                printf("Digite uma opcao valida\n");
                break;
        }
    }
}

int main ()
{

    int op;

    while (1)
    {
        printf("Menu:\n");
        printf("1 - Lista;\n");
        printf("2 - Pilha;\n");
        printf("3 - Fila;\n");
        printf("4 - Arvore binaria;\n");
        printf("Escolha uma estrutura: ");

        scanf("%d", &op);

        switch (op)
        {
            case 1:
                //loop_list(NULL);
                break;
            case 2:
                //loop_stack(NULL);
                break;
            case 3:
                //loop_queue(NULL);
                break;
            case 4:
                loop_binary_tree(NULL);
                break;
            default:
                break;
        }
    }

    printf("FIM DO PROGRAMA\n");
    return 0;
}