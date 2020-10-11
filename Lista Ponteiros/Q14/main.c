#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b){
  if ( *(int*)a <  *(int*)b ){
      return -1;
  }
  if ( *(int*)a == *(int*)b ){
      return 0;
  }
  if ( *(int*)a >  *(int*)b ){
      return 1;
  }
}

int main() {
    int n, i;
    float *x, aux;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    printf("\n");
    x = (float*)malloc(n*sizeof(float));
    for (i=0; i<n; i++){
        x[i] = rand()%100;
    }
    for (i=0; i<n; i++){
        printf("Valor desordenado [%d]: - %.1f", i, x[i]);
        printf("\n");
    }
    printf("\n");
    void (*compare_ptd)(int) = &compare;
    qsort(x, n, sizeof(int), compare_ptd);
    for (i=0; i<n; i++){
        printf("Valor ordenado [%d]: - %.1f", i, x[i]);
        printf("\n");
    }
    printf("\n");
    free(x);
    return(0);
}
