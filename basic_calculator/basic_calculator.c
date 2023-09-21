#include <stdio.h>
#include <stdlib.h>

// a calculator that performs four simple operations

int main()
{
    int process, sum, minus, times;
	float num1, num2, divided;
	
	printf("=======Transactions=========\n\n");
	printf("1- Sum\n");
	printf("2- Minus\n");
	printf("3- Times\n");
	printf("4- Divided\n\n\n");
	printf("Choose the process you want to do: ");
	scanf("%d", &process);
	printf("\n");
	
	
	if(process==1)
	{
		printf("Enter the first number.");
		scanf("%f", &num1);
		printf("Enter the second number.");
		scanf("%f", &num2);
		
		sum = num1+num2;
		
		printf("The result of the operation= %d", sum);
		
	}
	else if(process==2)
	{
		printf("Enter the first number.");
		scanf("%f", &num1);
		printf("Enter the second number.");
		scanf("%f", &num2);
		
		minus = num1-num2;
		
		printf("The result of the operation= %d", minus);
		
 	}
	else if(process==3)
	{
		printf("Enter the first number.");
		scanf("%f", &num1);
		printf("Enter the second number.");
		scanf("%f", &num2);
		
		times = num1*num2;
		
		printf("The result of the operation= %d", times);
	}
	else if(process==4)
	{
		printf("Enter the first number.");
		scanf("%f", &num1);
		printf("Enter the second number.");
		scanf("%f", &num2);
		
		if (num2>0)
		{
			divided = num1/num2;
			printf("The result of the operation= %f", divided);
		}
		else
		{
			printf("The error of dividing by zero!!!!");
		}
		
	}
	else
	{
		printf("You have made an incorrect transaction!!!");
	}
	return 0;
}
    
