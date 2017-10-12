#include <stdio.h>

int main()
 {
 	float vaha;
 	float vyska ;
 	float bmi;
 	
 	printf("Zadaj svoju vysku a vahu\n");
 	scanf("%f", &vyska);
 	scanf("%f", &vaha);
 	
 	//bmi = vaha/ (vyska*vyska);
 	//printf("Tvoje bmi je %f \n", bmi);


 if(vyska < 50 || vyska > 230) {
 	printf("Zadaj spravnu hodnotu");
 }
 

 else if(vaha > 300 || vaha < 15) {
 	
 	printf("Zadaj spravnu hodnotu");
 	
 }
 
  else {
  	
  	bmi = vaha/ (vyska*vyska)*10000;
 	printf("Tvoje bmi je %f \n", bmi);
  	
  	 if(bmi > 18&& bmi<25) {
 	
 	printf("Tvoje bmi je v norme");
 }
 
 else if(bmi<18) {
 	printf("Mas podvahu");
 	
 }
 
 else if(bmi>25 && bmi<30) {
 	
 	printf("Mas nadvahu");
 	
 }
  	
  	 else if(bmi > 30) {
 	printf("Si obezny");
 }
 
 
 }
  	
  }
 
 
 
 

