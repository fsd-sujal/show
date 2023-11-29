#include<stdio.h>

main()
{
	float a,b,c,d,e;
	printf("Enter The Value Of A =");
	scanf("%f",&a);
	printf("Enter The Value Of B =");
	scanf("%f",&b);
	printf("Enter The Value Of C =");
	scanf("%f",&c);
	printf("Enter The Value Of D =");
	scanf("%f",&d);
	printf("Enter The Value Of E =");
	scanf("%f",&e);
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("A is max"):("E is max"):(d>e)?printf("D is max"):printf("E is max"):(c>d)?(c>e)? printf("C is max"):printf("E is max"):(d>e)?printf("D is max"):printf("E is max"):(b>c)?(b>d)?(b>e)?printf("B is max"):("E is max"):(d>e)?printf("D is max"):printf("E is max"):(c>d)?(c>e)?printf("C is max"):printf("E is max"):(d>e)?printf("D is max"):printf("E is max");

}
