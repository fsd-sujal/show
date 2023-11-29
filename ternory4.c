#include<stdio.h>

main()
{
	float a,b,c,d;
	printf("Enter The Value Of A =");
	scanf("%f",&a);
	printf("Enter The Value Of B =");
	scanf("%f",&b);
	printf("Enter The Value Of C =");
	scanf("%f",&c);
	printf("Enter The Value Of D =");
	scanf("%f",&d);
	
	(a>b) ? (a>c)?(a>d)? printf("A is max"):printf("D is max") : (c>d)? printf("C is max"):printf("D is max") 
		  : (b>c)?(b>d)? printf("B is max"):printf("D is max") : (c>d)? printf("C is max"):printf("D is max");
}
