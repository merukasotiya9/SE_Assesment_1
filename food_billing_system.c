//Create a Food billing system
#include<stdio.h>
main()
{
	int choice,price=0,quantity,amount,total_amount;
	char ch;
	
	do
	{
	printf("\n---------------------------------------\n");
	printf("1.pizza \t\t\t   price=180rs/pcs \n");
	printf("2.burger \t\t\t  price=100rs/pcs  \n");
	printf("3.dosa    \t\t\t price=120rs/pcs  \n");
	printf("4.idli     \t\t\t price=50rs/pcs \n");
	printf("\n---------------------------------------\n");
	
	printf("\n\n\t please Enter your choice :- ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			
			printf("\n you have selected pizaaa");			
			printf("\n Enter the quantity :-");
	  		scanf("%d",&quantity);
	  		amount=180*quantity;
	  		printf("\n amount:%d",amount);
	  		total_amount=total_amount+amount;
			printf("\n total amount:%d",total_amount);
			break;
			
		case 2:
			
			printf("\n you have selected burger");
			printf("\n Enter the quantity :- ");
	  		scanf("%d",&quantity);
	  		amount=100*quantity;
	  		printf("\n amount :- %d",amount);
	  		total_amount=total_amount+amount;
			printf("\n total amount :- %d",total_amount);
			break;
			
		case 3:
			
			printf("\n you have selected dosa");
			printf("\n Enter the quantity :-");
	  		scanf("%d",&quantity);
	  		amount=120*quantity;
	  		printf("\n amount :- %d",amount);
	  		total_amount=total_amount+amount;
			printf("\n total amount :- %d",total_amount);
			break;
			
		case 4:
			
			printf("\n you have selected idli");
			printf("\nEnter the quantity :-");
	  		scanf("%d",&quantity);
	  		amount=50*quantity;
	  		printf("\namount :- %d",amount);
	  		total_amount=total_amount+amount;
			printf("\ntotal amount :- %d",total_amount);
			break;
			
		default:
			printf("\n\n\t invalid choice !");
				break;
	}
	
	printf("\n Do you want place more orders  (y or Y) :- ");
	scanf(" %c",&ch);
		
	}	while(ch=='y'||ch=='Y');
	
}