//#include <stdio.h>
//void main()
//{
//	char *pl[5] = {
//		"Bdsksnfkan",
//		"gangjing",
//		"一切皆有可能 ..李宁",
//		"adsad",
//		"shadoubushi"
//	};
//	int i;
//	for( i = 0;i<5;i++)
//	{
//		printf("%s\n",pl[i]);
//	}
//} 
#include <stdio.h>
void main()
{
	int temp[5] = {1,2,3,4,5};
	int *p = temp;
	int i;
	for(i = 0;i<5;i++)
	{
		printf("%d\n",*(p+i));
	}
}
