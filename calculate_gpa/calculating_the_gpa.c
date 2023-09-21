#include <stdio.h>
#include <stdlib.h>

// the program that calculates the grade point average

float gpa(int notes1, int notes2, int notes3, int projectnotes)
{
	float average;
	average = (notes1+notes2+notes3+projectnotes)/4.0;
	return average;
}

int main(int argc, char *argv[]) {
	
	int notes1,notes2,notes3,projectnotes;
	
	
	printf("\n\n===========Welcome to the GPA calculation system===========\n\n");
	
	while(1)
	{
		printf("Enter your first note: ");
		scanf("%d", &notes1);
		
		printf("\n");
		
		if(notes1<=100 && notes1>=0)
		{
			break;
		}
		else
		{
			printf("You entered an incorrect value. Please try again.\n\n");
		}
	}
	
	
	while(1)
	{
		printf("Enter your second note: ");
		scanf("%d", &notes2);
		
		printf("\n");
		
		if(notes2<=100 && notes2>=0)
		{
			break;
		}
		else
		{
			printf("You entered an incorrect value. Please try again.\n\n");
		}
	}
	
	
	while(1)
	{
		printf("Enter your third note: ");
		scanf("%d", &notes3);
		
		printf("\n");
			
		if(notes3<=100 && notes3>=0)
		{
			break;
		}
		else
		{
			printf("You entered an incorrect value. Please try again.\n\n");
		}
	}
	
	
	while(1)
	{
		printf("Enter your project note: ");
		scanf("%d", &projectnotes);
		
		printf("\n");
		
		if(projectnotes<=100 && projectnotes>=0)
		{
			break;
		}
		else
		{
			printf("You entered an incorrect value. Please try again.\n\n");
		}
	}
	
	printf("\n\n");
	
	float t = Notaverage(notes1, notes2, notes3, projectnotes);
	
	printf("Your GPA: %.4f", t);
	
	return 0;
}