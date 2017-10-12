#include  <stdio.h>
main()
{
	int a;
	int b;
	int c;
	printf("Zadaj 3 strany trojuholnika:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a+b>c && b+c>a && a+c>b) {
		printf("ano");
		
	}	
	
	else {
		printf("nie");
	}	
	
}
