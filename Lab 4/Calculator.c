#include <stdio.h>
int main () {
	float n1 , n2;
	char exp;
	printf(" which of the following operation you want to perform(+-/*): ");
	scanf(" %c", &exp);
    printf(" enter the first number: ");
	scanf("%f", &n1);
	printf(" enter the second number: ");
	scanf("%f", &n2);
	switch (exp) {
	case '+':
	printf("The Required Sum Is %f", n1 + n2);
	break;
	case '*':
	printf("The Required product Is %f", n1 * n2);
	break;
	case '-' :
	printf("The Required difference Is %f", n1 - n2);
	break;
	case '/' :
	printf("The Required quotient Is %f", n1 / n2);
	break;
	default:
	printf("Invalid Input");
	}
	return 0 ;
}
