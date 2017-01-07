#include <stdio.h>

int main(void) {
	int num,o,t,h;
	scanf("%d",&num);
	o=num%10;
	t=(num/10)%10;
	h=num/100;
	printf("%d\tHundreds\n",h);
	printf("%d\tTens\n",t);
	printf("%d\tOnes",o);
	return 0;
}

