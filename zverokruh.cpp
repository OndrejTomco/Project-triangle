#include <stdio.h>
main()
{
	int month = 0;
	int day = 0;
	while(1)
	{
	
	printf("Mesiac narodenia: ");
	scanf("%d", &month);
	printf("Den narodenia: ");
	scanf("%d", &day);
	
	switch(month)
	{
		case 1:
			if(day>0 && day<21) {
				printf("Kozorozec");
			}
			else {
				printf("Vodnar");
			}
			break;
			
		case 2:
			if(day>0 && day<20) {
				printf("Vodnar");
			}
			else {
				printf("Ryby");
			}
			break;
			
		case 3:
			if(day>0 && day<21) {
				printf("Ryby");
			}
			else {
				printf("Baran");
			}
			break;
			
		case 4:
			if(day>0 && day<21) {
				printf("Baran");
			}
			else {
				printf("Byk");
			}
			break;
			
		case 5:
			if(day>0 && day<21) {
				printf("Byk");
			}
			else {
				printf("Blizenci");
			}
			break;
			
		case 6:
			if(day>0 && day<21) {
				printf("Blizenci");
			}
			else {
				printf("Rak");
			}
			break;
			
		case 7:
			if(day>0 && day<23) {
				printf("Rak");
			}
			else {
				printf("Lev");
			}
			break;
			
		case 8:
			if(day>0 && day<23) {
				printf("Lev");
			}
			else {
				printf("Panna");
			}
			break;
			
		case 9:
			if(day>0 && day<23) {
				printf("Panna");
			}
			else {
				printf("Vahy");
			}
			break;
			
		case 10:
			if(day>0 && day<23) {
				printf("Vahy");
			}
			else {
				printf("Skorpion");
			}
			break;
			
		case 11:
			if(day>0 && day<23) {
				printf("Skorpion");
			}
			else {
				printf("Strelec");
			}
			break;
			
		case 12:
			if(day>0 && day<22) {
				printf("Strelec");
			}
			else {
				printf("Kozorozec");
			}
			break;
		default: printf("Wrong input");
		
		
	}
	printf("\n");
}
		
}
