#include <stdio.h>
int main()
{
	int var= 20;
	int *ip;
	ip=&var;
	printf("Address of the variable: %x\n",&var);
	printf("Address of the variable: %x\n",ip);
	printf("value of the variable: %d\n",*ip);
}
