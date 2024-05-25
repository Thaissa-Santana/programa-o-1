#include <stdio.h>

main(){
	
	int a=3, b=0, c=3;

	do{
		a = a - 1;
		b = b + 1;
		c = c + b;
	}
	while (c < a);
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);	

	return 0;
}
