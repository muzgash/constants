#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#include "libreriaEuler.h"

int main(int argc, char *argv[])
{
    float cons;
    int s;

	if( argc != 2 ) {
	    fprintf(stderr,"%s no. de Iteraciones\n",argv[0]);
		exit(1);
	}
	s=atoi(argv[1]);
	cons=EMasch(s);
	printf("Valor de Euler Mascheroni calculado %f \n",cons);

	return 0;
}
