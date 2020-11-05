#include<stdio.h>
main()
{
	printf("Enter the mark:");
	int mark;
	scanf("%d",&mark);
	if(mark>40)
	{
		if(mark>=85 && mark<=100)
		{
			printf("Grade A");
		}
		if(mark>=70 && mark<=84)
		{
			printf("Grade B");
		}
		if(mark>=55 && mark<=69)
		{
			printf("Grade C");
		}
		if(mark>=40 && mark<=54)
		{
			printf("Grade D");
		}
	}
	else
	{
		printf("Grade F");
	}
}
