#include<stdio.h>
#include<stdlib.h>

void funcion(double *k)
{
    (*k)=(*k)-(((*k)*(*k)-(*k)-1)/(2*(*k)-1));
}
