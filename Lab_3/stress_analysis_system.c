#include <stdio.h>
int main(){
	float as,mys,fos;
	printf("ENTER APPLIED STRESS:");
	scanf("%f", &as);
	printf("ENTER MATERIAL YIELD STENGTH:");
	scanf("%f",&mys);
	if (as==0){
		printf("Invalid Entry");
	}
	else {
	
	    fos=mys/as;
	    if(fos>=2.0){
		    printf("Safe Design");
	    }
	    else if(fos>=1.5&&fos<2.0){
		    printf("Acceptable with Monitoring");
	    }
      	else if(fos<1.5&&fos>=0){
		    printf("DANGER-Redesign Needed");
    	}
    	else printf("INVALID ENTRY");
    }
	return 0;
}
