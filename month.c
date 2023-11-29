#include<stdio.h>

main()
{
	int month;
	
	printf("Press 1 For January \n\n");
	printf("Press 2 For February  \n\n");
	printf("Press 3 For March  \n\n");
	printf("Press 4 For April \n\n");
	printf("Press 5 For May \n\n");
	printf("Press 6 For June \n\n");
	printf("Press 7 For July \n\n");
	printf("Press 8 For August \n\n");
	printf("Press 9 For September \n\n");
	printf("Press 10 For October \n\n");
	printf("Press 11 For November \n\n");
	printf("Press 12 For December \n\n");
	
	printf("Enter The Number Between The 1 to 12 \n");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1 :
			printf("This Is a January");
			break;
		case 2 :
			printf("This Is a February");
			break;
		case 3 :
			printf("This Is a March");
			break;
		case 4 :
			printf("This Is a April");
			break;
		case 5 :
			printf("This Is a May");
			break;
		case 6 :
			printf("This Is a June");
			break;
		case 7 :
			printf("This Is a July");
			break;
		case 8 :
			printf("This Is a August");
			break;
		case 9 :
			printf("This Is a September");
			break;
		case 10 :
			printf("This Is a October");
			break;
		case 11 :
			printf("This Is a November");
			break;
		case 12 :
			printf("This Is a December");
			break;
		default:
			printf("Plese Enter Valid Number");
			break;
	}
}
