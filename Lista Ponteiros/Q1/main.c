#include <stdio.h>

int main()
{
    int i=3,j=5, a , b, c, d;
    int *p, *q;
    p = &i;
    q = &j;

    a = p == &i;
    b = *p - *q;
    c = **&p;
    d = 3 - *p/(*q) + 7;

    printf("%d,%d,%d,%d", a,b,c,d);

    return 0;

}
