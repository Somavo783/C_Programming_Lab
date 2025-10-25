#include <stdio.h>
int main ()
{
	float unit , bill = 0.0 ;
	printf("ENTER UNIT OF ELECTRICITY CONSUMED:");
	scanf("%f", &unit);
	if ( unit <0) {
		printf(" INVALID INPUT");
	}
	else if (unit <= 100) {
		bill = unit * 1.5; 
		printf(" THE BILL IS %f", bill);
	}
	else if ( unit >100 && unit <= 200) {
		bill = 150 + (unit - 100)*2;
		printf(" THE BILL IS %f", bill);
	}
	else if ( unit > 200 && unit <= 300) {
		bill =350 + (unit - 200)*3;
		printf(" THE BILL IS %f", bill);
	}
	else {
		bill = 650 + (unit - 300)*5;
		printf(" THE BILL IS %f", bill);
	}
	return 0;
}
