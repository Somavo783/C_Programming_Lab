#include <stdio.h>
int main ()
{
	int num, sum;
	printf(" ENTER THE NATURAL NUMBER :");
	scanf("%d", &num);
	for ( int i=0 ; i <= num ; ++i){
		sum = sum + i ;
	}
	printf("THE REQUIRED SUM IS %d", sum);
	return 0;
}
