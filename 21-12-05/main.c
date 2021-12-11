//#include <stdio.h>
//void main()
//{
//	char a= 'F';
//	int f = 123;
//	
//	char *pa = &a;
//	int *pb = &f;
//	
//	printf("a = %c\n",*pa);
//	printf("f = %d\n",*pb);
//	
//	*pa = 'c';
//	*pb += 1;
//	
//	printf("now,a = %c\n",*pa);
//	printf("now,f = %d\n",*pb);
//	
// } 


//#include <stdio.h>
//void main()
//{
//	char a[]="dashkkhkh";
//	int b[5] = {1,2,3,4,5};
//	float c[5] = {1.1,2.2,3.3,4.4,5.5};
//	double d[5] = {1.1,2.2,3.3,4.4,5.5};
//	
//	char *p = a;
//	printf("*p = %c,*(p+1) = %c,*(p+2) = %c\n",*p,*(p+1),*(p+5));
//	
//
//}
//
//

//#include <stdio.h>
//#include <string.h>
//void main()
//{
//	char *str = "asdsadsa";
//	int i,length;
//	
//	length = strlen(str);
//	
//	for (i = 0; i<length; i++)
//	{
//		printf("%c",str[i]);
//		printf("\n");
//	}
//	
//}
//
//#include <stdio.h>
//void main()
//{
//	char str[] = "dasdadsasadsa";
//	char *target = str;
//	int count = 0;
//	while (*target++ != '\0')
//	{
//		count++;
//	}
//	printf("总共有%d个字符！\n",count);
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int e = 5;
//	int *p1[5] = {&a,&b,&c,&d,&e};
//	int i;
//	for(i = 0;i < 5; i++)
//	{
//		printf("%d\n",*p1[i]);
//	}
//	
//}
//
//

//#include <stdio.h>
//void main()
//{
//	char *p1[5] = {
//		"dsadsadsa",
//		"dsadsadsdas",
//		"zxcsad",
//		"dsadsa",
//		"qwdqdwqdq"
//	};
//	int i;
//	
//	for(i = 0; i < 5; i++)
//	{
//		printf("%s\n",p1[i]);
//	}	
//} 
#include <stdio.h>
void main()
{
	int temp[5] = {1,2,3,4,5};
	int (*p2)[5] = &temp;
	int i;
	for(i = 0;i<5;i++)
	{
		printf("%d\n",*(*p2 + i));
	}
}

































