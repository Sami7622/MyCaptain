#include<stdio.h>
int main()
{
	char str[]="01";
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%s",str);
		}
		printf("\n");
	}
	return 0;
}
