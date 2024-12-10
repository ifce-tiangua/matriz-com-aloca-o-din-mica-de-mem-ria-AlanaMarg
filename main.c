#include <stdio.h>
#include <stdlib.h>

int** matriz_creat(int linhas, int colunas);
void matriz_read(int** matriz, int linhas, int colunas);
void matriz_show(int** matriz, int linhas, int colunas);
void matriz_destroy(int **matriz, int linhas);

int main(){

    int** matriz, linhas, colunas;
    scanf("%d %d", &linhas, &colunas);

    if(linhas <= 0 || colunas <= 0) {
        printf("[matriz vazia]\n");
        return 0;
    } else {
    matriz = matriz_creat(linhas, colunas);
    matriz_read(matriz, linhas, colunas);
    matriz_show(matriz, linhas, colunas);
    matriz_destroy(matriz, linhas);
    }

    return 0;
}

int** matriz_creat(int linhas, int colunas) {
    int **matriz;

    matriz = (int**)malloc(linhas * sizeof(int*));
    if(matriz != NULL)
        for(int i = 0; i < linhas; i++) {
             matriz[i] = (int*)malloc(colunas * sizeof(int));
        }
    return matriz;
}

void matriz_read(int** matriz, int linhas, int colunas) {
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}

void matriz_show(int** matriz, int linhas, int colunas) {
    printf("'");
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d", matriz[i][j]);
            if(j < colunas - 1) printf(" ");
        }
        if(i < linhas - 1) printf("\n");
    }
    printf("'");
    printf("\n");
}

void matriz_destroy(int **matriz, int linhas) {
    for(int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
}