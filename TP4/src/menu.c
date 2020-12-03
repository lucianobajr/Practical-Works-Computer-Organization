#include "menu.h"
#include "assortment.h"

void menu()
{
    FILE *teste;
    char *name;
    int tam,position = 0;
    int resp[2];

    print_menu1();
    scanf("%d", &resp[0]);

    print_menu2();
    scanf("%d", &resp[1]);

    switch (resp[1])
    {
    case 1:
        name = "./data/1000.txt";
        tam = 1000;
        break;
    case 2:
        name = "./data/2000.txt";
        tam = 2000;
        break;
    case 3:
        name = "./data/5000.txt";
        tam = 5000;
        break;
    case 4:
        name = "./data/10000.txt";
        tam = 10000;
        break;

    default:
        printf("\nOpção não existe!\n");
        exit(0);
        break;
    }

    int arr[tam];
    int n = sizeof(arr) / sizeof(arr[0]);

    teste = fopen(name, "r");
    if (teste == NULL)
    {
        printf("dando erro");
    }
    else
    {
        while (!feof(teste))
        {
            fscanf(teste, "%d", &arr[position]);
            position++;
        }
    }

    printf("\n\nANTES DE ORDENAR\n\n");
    printArray(arr, n);

    switch (resp[0])
    {
    case 1:
        bubbleSort(arr, n);
        break;
    case 2:
        radixsort(arr, n);
        break;
    case 3:
        quickSort(arr, 0, n - 1);
        break;
    case 4:
        heapSort(arr, n);
        break;
    default:
        printf("\nOpção seleciona não existe!\n");
        exit(0);
        break;
    }

    printf("\n\nDEPOIS DE ORDENAR\n\n");
    printArray(arr, n);
}

void print_menu1()
{
    int i;
    fputs(" ", stdout);
    for (i = 0; i < 113; i++)
    {
        fputs("_", stdout);
    }
    printf("\n|");
    for (i = 0; i < 113; i++)
    {
        fputs(" ", stdout);
    }
    printf("|\n|");
    for (i = 0; i < 56; i++)
    {
        fputs(" ", stdout);
    }
    printf("MENU");
    for (i = 0; i < 53; i++)
    {
        fputs(" ", stdout);
    }
    printf("|");
    printf("\n");
    printf("|");
    for (i = 0; i < 113; i++)
    {
        fputs("_", stdout);
    }
    printf("|\n|");
    for (i = 0; i < 113; i++)
    {
        fputs(" ", stdout);
    }
    printf("|\n|           ");
    for (i = 0; i < 15; i++)
    {
        fputs(" ", stdout);
    }
    printf("Digite (1) para Utilizar o BubbleSort, (2) para Utilizar o RadixSort");
    for (i = 0; i < 19; i++)
    {
        fputs(" ", stdout);
    }
    printf("|");

    printf("\n|           ");
    for (i = 0; i < 18; i++)
    {
        fputs(" ", stdout);
    }
    printf("Digite (3) para Utilizar o QuickSort e (4) Utilizar o HeapSort");
    for (i = 0; i < 22; i++)
    {
        fputs(" ", stdout);
    }
    printf("|");

    printf("\n|           ");
    for (i = 0; i < 102; i++)
    {
        fputs(" ", stdout);
    }
    printf("|\n");

    printf("|");
    for (i = 0; i < 113; i++)
    {
        fputs("_", stdout);
    }
    printf("|");
    printf("\n");
    printf("------------->");
    fflush(stdin);
}

void print_menu2()
{
    int i;
    fputs(" ", stdout);
    for (i = 0; i < 113; i++)
    {
        fputs("_", stdout);
    }
    printf("\n|");
    for (i = 0; i < 113; i++)
    {
        fputs(" ", stdout);
    }
    printf("|\n|");
    for (i = 0; i < 56; i++)
    {
        fputs(" ", stdout);
    }
    printf("MENU");
    for (i = 0; i < 53; i++)
    {
        fputs(" ", stdout);
    }
    printf("|");
    printf("\n");
    printf("|");
    for (i = 0; i < 113; i++)
    {
        fputs("_", stdout);
    }
    printf("|\n|");
    for (i = 0; i < 113; i++)
    {
        fputs(" ", stdout);
    }
    printf("|\n|         ");
    printf("Digite (1) para Utilizar um arquivo de tamanho 1000, (2) para Utilizar um arquivo de tamanho 2000");
    for (i = 0; i < 7; i++)
    {
        fputs(" ", stdout);
    }
    printf("|");

    printf("\n|        ");
    for (i = 0; i < 10; i++)
    {
        fputs(" ", stdout);
    }
    printf("Digite (3) para um arquivo de tamanho 5000 e (4) um arquivo de tamanho 10000");
    for (i = 0; i < 19; i++)
    {
        fputs(" ", stdout);
    }
    printf("|");

    printf("\n|           ");
    for (i = 0; i < 102; i++)
    {
        fputs(" ", stdout);
    }
    printf("|\n");

    printf("|");
    for (i = 0; i < 113; i++)
    {
        fputs("_", stdout);
    }
    printf("|");
    printf("\n");
    printf("------------->");
    fflush(stdin);
}