#include <stdio.h>

int main(void) {
	int x=65;
	int y=0x31;
	int z=0x3132;
	int a=0x31324142;
	int b=0x42413231;
	int d=111222;
	int ary[]={0x31324142,0x41423132,100};
	printf("%d\n",sizeof(int));
	printf("%c\n",sizeof(char));
	printf("%d\n",a);
	printf("%d\n",z);
	printf("%d\n",b);
	printf("%c\n",a);
	printf("%c\n",b);
	printf("%x\n",d);
	printf("%s\n",ary);
	return 0;
}

