#include <stdio.h>

int add(int a, int b)
{
   return a + b;
}

float average(int a, int b)
{
   return (a + b) / 2.0;
}

void printResult(int x, int y, int sum, float avg)
{
	printf("The sum of %d and %d is %d\n", x, y, sum);
	printf("The average of numbers is %.1f\n", avg);	
}	
int main()
{
   	int a, b;
   	printf("Enter two integers:");
	scanf("%d %d", &a , &b);
	int sum = add(a,b);
	float avg = average(a,b);
	printResult(a,b,sum,avg);	
   	return 0;
}
