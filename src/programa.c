#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#include "libreriaPi.h"

int main(int argc, char *argv[])
{
    double t,k=3.0,l=-1.0;
	int i,s;

	if( argc != 2 ) {
	    fprintf(stderr,"%s no. de Iteraciones\n",argv[0]);
		exit(1);
	}
	t=1.0;
	s=s=atoi(argv[1]);
	for(i=0;i<s;i++) {
	    funcion(&t,&k,&l);
	}
	t*=4;
	printf("Valor de pi calculado %1.16f, Valor de pi en math.h %1.16f\n",t,M_PI);

	return 0;
}
