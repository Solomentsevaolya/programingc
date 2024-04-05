#include<stdio.h>
#include<stdlib.h>


int** summ(int size, int **m1, int **m2){
    int **result;
    int i,j;
    result = (int**)malloc(size*sizeof(int*));
    for(i=0; i<size;i++)
    {result[i] = (int*)malloc(size*sizeof(int*));}
    
    for(i=0; i<size;i++){
        for (j=0;j<size;j++){
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return result;
    
}



void printmatrix(int size, int **matrix){
    int i,j;
    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            printf("%d", matrix[i][j]);
        }
    }
    printf("\n");
}



int main(int argk, char *argv[]){
    int i,j;
    int N;
    int **m1, **m2, **m3;
    printf("Введите размер матрицы: ");
    scanf("%d", &N);
    
    m1 = (int**)malloc(N*sizeof(int*));
    for (i=0; i<N; i++)
    {m1[i] = (int*)(N*sizeof(int));}
    
     m2 = (int**)malloc(N*sizeof(int*));
    for (i=0; i<N; i++)
    {m2[i] = (int*)(N*sizeof(int));}
    
    
    printf("Введите значениz для m1: ");
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    
    
    printf("Введите значениz для m2: ");
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            scanf("%d", &m2[i][j]);
        }
    }
   
   printf("Печать матрицы m1: \n");
   printmatrix(N, m1);
   
   printf("Печать матрицы m2: \n");
   printmatrix(N, m2);
   
   printf("Сумма m1 и m2: \n");
   m3 = summ(N,m1,m2);
   printmatrix(N,m3);
   
   for (i=0; i<N; i++){
       free(m1[i]);
       free(m2[i]);
       free(m3[i]);
   }
    free(m1);
    free(m2);
    free(m3);
    
    return 0;
}


