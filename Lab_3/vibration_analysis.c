#include <stdio.h>
int main (){
	float vib,freq;
	printf("Enter The Vibrational Amplitude (In mm):");
	scanf("%f", &vib);
	printf("Enter The Frequency(In Hz):");
	scanf("%f", &freq);
	if(vib<=0||freq<=0){
		printf("Invalid Entry");
	}
	else if(vib>0.5&&(freq>20&&freq<50)){
		printf("High Risk");
	}
	else if(vib>0.5||freq>60){
		printf("Medium Risk");
	}
	else if(vib<=0||freq<=0){
		printf("Invalid Entry");
	}
	else printf("Low Risk");
	return 0;
}
