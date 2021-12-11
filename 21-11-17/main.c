//#include <stdio.h>
//void jia(int* num)
//{
//	++*num;		
//}
//void main()
//{
//	int i;
//	scanf("%d",&i);
//	jia(&i);
//	printf("%d",i);
//}

#include <stdio.h>
int jia(int i)
{
	return ++i;
}

void main()
{
	int i;
	scanf("%d",&i);
	int num = jia(i);
	printf("%d",num);
}



