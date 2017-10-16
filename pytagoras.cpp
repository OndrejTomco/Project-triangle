#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	int b;
	int c;
	int asq;
	int bsq;
	int csq;
	printf("Zadaj 3 strany trojuholnika:\n");
	scanf("%d %d %d", &a, &b ,&c);
	
	asq =  pow(a, 2);
	bsq =  pow(b, 2);
	csq =  pow(c, 2);
	
	if(asq == bsq+csq || bsq == asq+csq || csq == asq+bsq ) {
		printf("Trojuholnik je pravouhly");
	}
	else {
		printf("Trojuholnik nieje pravouhly");
	}
	
return 0;	
}
