#include <stdio.h>
int main ()
{
	int Number;
	printf("Enter The Number:");
	scanf("%d", &Number);
	if (Number > 0) { printf("The no. is positive");
	}
	else if (Number == 0) { printf("The No. is neither negative nor positive");
	}
	else { printf(" The Number Is Negative");
	}
	return 0;
} 
