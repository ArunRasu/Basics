#include<stdio.h>
#include<math.h>
int main()
{
	double num = 0.00;
	int value = 0, amount;


	printf("Enter the Number\n");
	scanf("%lf", &num);
	
	amount = num * 100;

	value = (amount % 10000);
	printf("num [%lf], amount [%d], value 1[%d]\n", num, amount, value);

	return 1;
}
