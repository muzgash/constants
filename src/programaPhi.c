#include<stdio.h>
#include<stdlib.h>

#include "libreriaPhi.h"

int main(int argc, char *argv[])
{
    double t,k=3.0,l=-1.0,au=1.6180339887;
	int i,s;

	if( argc != 2 ) {
	    fprintf(stderr,"%s no. de Iteraciones\n",argv[0]);
		exit(1);
	}
	t=1.0;
	s=atoi(argv[1]);
	for(i=0;i<s;i++) {
	    funcion(&k);
	}
	printf("Valor de Phi calculado %1.16lf, Valor de phi real %1.16lf\n",k,au);

	return 0;
}
