#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *x, aux;
    printf("Digite a quantidade de numeros no vetor: ");
    scanf("%d", &n);
    x = (float*)malloc(n*sizeof(float));
    for (i=0; i<n; i++){
        x[i] = rand()%100;
    }
    for (i=0; i<n; i++){
        printf("Vetor desordenado[%d]: - %.1f", i, x[i]);
        printf("\n");
    }
    printf("\n");
    for (i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (x[i] < x[j]){
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
        }
      }
    }
    for (i=0; i<n; i++){
        printf("Vetor ordenado[%d]: - %.1f", i, x[i]);
        printf("\n");
    }
    free(x);
    return(0);
}
