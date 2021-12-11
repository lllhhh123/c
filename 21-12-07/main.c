#include <stdio.h>
void main()
{
	int num = 1024;
	int *pi = &num;
	char
	*ps = "sda";
	void *pv;
	pv = pi;
	printf("%p,%p\n",pi,pv);
	pv = ps;
}
