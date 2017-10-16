#include <stdio.h>

int main()
{
	int num;
	int count = 0;
	float sum = 0;
	float avg;
	
	while(count<5) {

	printf("Zadaj  cislo: ");
	scanf("%d", &num);
	count += 1;
	sum+=num;
	}
	
	avg = sum/5;
	printf("Avarage of your numbers is: %.2f",avg);
	
}
