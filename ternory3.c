#include<stdio.h>

main()
{
	float a,b,c;
	printf("Enter The Value Of A =");
	scanf("%f",&a);
	printf("Enter The Value Of B =");
	scanf("%f",&b);
	printf("Enter The Value Of C =");
	scanf("%f",&c);
	
	(a>b) ? (a>c)? printf("A is max"): printf("C is max")
		  :(b>c)? printf("B is max"): printf("C is max");
}
