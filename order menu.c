#include<stdio.h>
main()
{
	//1. display the menu
	printf("pick an iteam : \n1. pizza-Rs 239\n2. burger-Rs 129\n3. pasta-Rs 179\n4. frenchfries-Rs 99\n5. sandwich-Rs 149");
	//2. read thier choice
	int choice=0;
	scanf("%d",&choice);
	//3. display based on thier choice
	
	switch(choice)
	{
		case 1:
			printf("you picked pizza.");
			break;
		case 2:
			printf("you picked burger.");
			break;
		case 3:
			printf("you picked pasta.");
			break;	
		case 4:
			printf("you picked french fries.");
			break;
		case 5:
	    	printf("you picked sandwich.");
	    default: printf("invalid choice");	
			
	}
}
    
