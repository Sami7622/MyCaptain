#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number: \n");
	scanf("%d",&n); //code for taking inputs
	switch(n)
	{
		case 1:printf("Food item-Burger \n price-Rs 129 \n");
				break;
		case 2:printf("Food item-Pizza \n price-Rs 239 \n");
				break;
		case 3:printf("Food item-Sandwich \n price-Rs 149 \n");
				break;
		case 4:printf("Food item-Pasta \n price-Rs 179 \n");
				break;
		case 5:printf("Food item-French Fries \n price-Rs 99 \n");
				break;
		default:printf("Please enter numbers between 1 to 5 \n");
	}
	return 0;           //end of code
}
