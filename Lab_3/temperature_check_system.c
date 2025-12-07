#include <stdio.h>
int main (){
	int c;
	printf("Enter Present Temperature:");
	scanf("%d", &c);
	if(c<=60||c>80){
		printf("Temperature Warning");		
	}
	else printf("Temperature is Safe");
	return 0;
}
