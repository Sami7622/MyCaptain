#include <stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers: \n");
	scanf("%d",&a);
	scanf("%d",&b); //code for taking inputs
	a=a+b;
	b=a-b;
	a=a-b; //code to swap numbers
	printf("values after swapping: \n");
	printf("%d %d",a,b); //code for output
	return 0;           //end of code
}
