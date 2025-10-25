#include <stdio.h>
int main () {
	int num;
	printf("ENTER THE NUMBER :");
	scanf("%d", &num);
	if ( num % 5 == 0 && num % 11 == 0) {
		printf("THE NUMBER IS DIVISIBLE BOTH BY 5 & 11");
	}
	else { printf("THE NUMBER IS NOT DIVISIBLE BOTH BY 5 & 11");
	}
	return 0;
}
