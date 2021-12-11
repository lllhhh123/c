#include <stdio.h>
void djx(int a[3][3])
{	
	int i, j;
	int k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				k+=a[i][j];
			}
		}
	}
	printf("%d",k);
}
void main()
{	
	int i,j;
	int a[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d",a[i][j]);
			}
				
		}
	djx(a);
}
