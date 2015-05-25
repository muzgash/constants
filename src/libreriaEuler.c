#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float EMasch(int t)
{
float EM=0;
float i;

for(i=1;i<=t;i++) EM+=1.0/i;

EM=EM-log(t);

return EM;
}
