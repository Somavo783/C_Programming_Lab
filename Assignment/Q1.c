#include <stdio.h>
int main ()
{
	int a , b , c;
	printf("ENTER THE THREE NUMBERS TO BE COMPARED:");
	scanf("%d%d%d", &a, &b, &c);
	if ( a>=b && a>=c) { 
	printf("%d IS THE LARGEST NUMBER", a);
	} 
	else if ( b>=a && b>=c) {
		printf("%d IS THE LARGEST NUMBER", b);
	}
	else  {
		printf("%d IS THE LARGEST NUMBER", c);
	}
	return 0;
}
