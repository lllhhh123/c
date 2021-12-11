//#include <stdio.h>
//void zs(int k)
//{
//	int i,j;
//	printf("1 \n");
//	for(i=2;i<=k;i++)
//	{
//		int flag = 1 ;
//		for(j=2;j<i;j++)
//		{
//			if(i%j == 0)
//			{
//			
//				flag=0;
//				break;
//			}
//		}
//		if( flag == 1)
//			printf("%d\n",i);
//		
//	}
//}
//
//void add(int a, int b)
//{
//	printf("%d\n", a+b);
//}
//
//void jian(int a, int b)
//{
//	printf("%d\n", a-b);
//}
//
//
//void main()
//{
//	int k;
//	scanf("%d",&k);
//	zs(k);
//	
//	add(1, 3);
//	
//	jian(4, 2);
//}

#include <stdio.h>
void enumprintf(int num);
void getodd(int num)
{
	int i;
	for(i=0;i<num;i++)
		{
			if(i%2!=0)
			enumprintf(i);
		}
}
void enumprintf(int num)
{
	int i;
	for(i=1;i<=num;i++)
		{
			if(i%2!=0)
				printf("%d",i);
		}
		printf("\n");
}
int main()
{
	int num;
	scanf("%d",&num);
	getodd(num);
	return 0;
}
















