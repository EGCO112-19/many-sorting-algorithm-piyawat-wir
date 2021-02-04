#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

int main(int argc, char *argv[]){

    int i, N;

    if (argc < 3) {
        printf("Syntax error.\n");
        return 1;
    }
    N = argc-2;
    int *numArray = (int*) malloc(sizeof(int)*(N));
    for (i = 0 ; i < N; i++)
        numArray[i] = atoi(argv[i+2]);

    if (strcmp(argv[1], "bubble") == 0)
        bubble(numArray, N);
    else if (strcmp(argv[1], "insertion") == 0)
        insertion(numArray, N);
    else if (strcmp(argv[1], "selection") == 0)
        selection(numArray, N);
    else {
        printf("Unknown sorting.\n");
        return 1;
    }
    printf("\nSorted result:\n");
    display(numArray, N);
    return 0;
}
