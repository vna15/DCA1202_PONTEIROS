#include <stdio.h>

int main()
{
    char xchar[4];
    int xint[4];
    float xfloat[4];
    double xdouble[4];
    int i;
    for (i=0; i<4; i++){
         printf("%d ",xchar+i);
    }
    printf("\n");
    for (i=0; i<4; i++){
         printf("%d ",xint+i);
    }
    printf("\n");
    for (i=0; i<4; i++){
         printf("%d ",xfloat+i);
    }
    printf("\n");
    for (i=0; i<4; i++){
         printf("%d ",xdouble+i);
    }
    return 0;
}

//Para o vetor do tipo char, o computador alocou 1 bit para cada valor do vetor.
//Para o vetor do tipo int, o computador alocou 4 bits para cada valor do vetor.
//Para o vetor do tipo float, o computador alocou 4 bits para cada valor do vetor.
//Para o vetor do tipo double, o computador alocou 8 bits para cada valor do vetor.
