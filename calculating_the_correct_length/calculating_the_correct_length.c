	#include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    // a program that decodes the distance between two points whose coordinates are given by

    int main()
    {

    int x1,y1,x2,y2;
	float distance;	
	
	printf("please enter the x1 coordinate: ");
	scanf("%d", &x1);
	printf("please enter the y1 coordinate: ");
	scanf("%d", &y1);
	
	printf("======================\n");
		
	printf("please enter the x2 coordinate: ");
	scanf("%d", &x2);
	printf("please enter the y2 coordinate: ");
	scanf("%d", &y2);
	
	distance = sqrt(pow( (y2-y1),2) + pow((x2-x1),2));
	
	printf("Aradaki mesafe: %f", distance);
	
	return 0; 

    }
    	

	