#include<stdio.h>
main()
{
	printf("Select an number:\n1.0\n2.1");
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("You select 0");
		case 2:
			printf("You select1");
		default:
			printf("Invalid choice");
	}
}
