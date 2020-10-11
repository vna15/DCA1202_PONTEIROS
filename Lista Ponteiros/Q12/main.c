//Resposta :
//    Um ponteiro para uma função é um ponteiro que,
// diferente de um ponteiro convencional ( o qual aponta para um endereço de memória),
// irá apontar para uma função

#include <stdio.h>



int verificar (const void * a, const void * b)
{
  if ( *(int*)a >  *(int*)b ){
      return -1;
  }
  if ( *(int*)a ==! *(int*)b ) {
      return 0;
  }
  if ( *(int*)a >  *(int*)b ) {
      return 1;
  }
}

int values[] = { 30, 12, 300, 55, 36, 14 };

int main() {
  int n;

  void (*verificar_ptd)(int) = &verificar;

  qsort(values, 6, sizeof(int), verificar_ptd);
  for (n=0; n<6; n++)
     printf ("%d ",values[n]);

  return 0;
}
