#include <stdio.h>
int main ()
{
	int m, a, f;
	printf("ENTER THE MASS OF THE OBJECT=");
	scanf("%d", &m);
	printf("ENTER THE ACCELERATION OF THE OBJECT=");
	scanf("%d", &a);
	f=m*a;
	printf("THE REQUIRED FORCE IS=%d", f);
	return 0;
}
