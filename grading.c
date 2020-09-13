#include <stdio.h>
int main()
{
	int n;
	printf("Enter marks: \n");
	scanf("%d",&n); //code for taking inputs
	if(n<=100 && n>=85)
		printf("Grade A");
	else if(n<85 && n>=70)
		printf("Grade B");
	else if(n<70 && n>=55)
		printf("Grade c");
	else if(n<55 && n>=40)
		printf("Grade D");
	else
		printf("Grade F"); //code for output
	return 0;           //end of code
}
