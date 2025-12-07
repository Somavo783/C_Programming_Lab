#include <stdio.h>
int main () {
	float t1,t2;
	printf("Enter The Tensile Strength of First Material:");
	scanf("%f", &t1);
	printf("Enter The Tensile Strenght of Second Material:");
	scanf("%f", &t2);
	if(t1>t2){
		printf("The Material 1 has higher tensile strength i.e %f", t1);
	}
	else if (t2>t1) {
		printf("The Material 2 has higher tensile strength i.e %f", t2);
	}
	else printf("Both Have Equal Tensile Strength which is %d", t2);
	return 0;	
}
