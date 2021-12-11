//#include <stdio.h>
//void main()
//{
//	int array[4][5] = {0};
//	int i,j,k = 0;
//	
//	for(i = 0;i<4;i++)
//	{
//		for(j = 0;j<5;j++)
//		{
//			array[i][j] = k++;
//		}
//	}
//	printf("array + 1: %p\n",array+1);
//	printf("array[1]:%p\n",array[1]);
//	printf("&array[1][0]:%p\n",&array[1][0]);
//	printf("**(array+1):%d\n",**(array+1));
//}

//#include <stdio.h>
//void main()
//{
//	int array[4][5] = {0};
//	int i,j,k = 0;
//	
//	for(i = 0;i<4;i++)
//	{
//		for(j = 0;j<5;j++)
//		{
//			array[i][j] = k++;
//		}
//	}
//	printf("array + 1: %p\n",array+1);
//	printf("array[1]:%p\n",array[1]);
//	printf("&array[1][0]:%p\n",&array[1][0]);
//	printf("**(array+1):%d\n",**(array+1));
//	printf("*(*(array+1)+3):%d\n",*(*(array+1)+3));
//	printf("array[1][3]:%d\n",array[1][3]);
//}
#include <stdio.h>
void main()
{
	int array[2][3] = {{0,1,2},{3,4,5}};
	int (*p)[3] = array;
	
	printf("**(p + 1):%d\n",**(p+1));
	printf("**(array+1):%d\n",**(array+1));
	printf("array[1][0]:%d\n",array[1][0]);
	printf("*(*p+1)+2:,%d\n",*(*(p+1)+2));
	printf("*(*array+1)+2: %d\n",*(*(array+1)+2));
	printf("*array[1][2]: %d\n",array[1][2]);
	printf("%d",(*p)[5]);
}
















