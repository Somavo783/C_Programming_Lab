#include <stdio.h>
int main ()
{
	float c, m, v, ke;
	c = 0.5;
	printf("ENTER THE MASS OF THE OBJECT=");
	scanf("%f", &m);
	printf("ENTER THE VELOCITY OF THE OBJECT=");
	scanf("%f", &v);
	ke = c*m*v*v;
	printf("THE REQUIRED KINETIC ENERGY IS %f J", ke);
	return 0;
}
