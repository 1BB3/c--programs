//WAP to find area of circle, triangle and square using switch case
# include <stdio.h>

main(){
	int choice;
	
	printf("Select the area to be calculated : \n");
	printf("\n1. Circle");
	printf("\n2. Square");
	printf("\n3. Triangle\n\n");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
		{
			float r;
			printf("Enter the radius of circle :");
			scanf("%f",&r);
			printf("The area of the circle is : %0.2f",3.1415*r*r);
			break;
		}
		
			case 2:
		{
			float r;
			printf("Enter the length of square :");
			scanf("%f",&r);
			float a = r*r;
			printf("The area of the square is : %0.2f",a);
			break;
		}
		
			case 3:
			{
			float b,h;
			printf("Enter the base and height of triangle");
			scanf("%f%f",&b,&h);
			printf("The area of the triangle is : %0.2f",0.5*b*h);
			break;
		}
		default:
			printf("Not a valid entry");
			break;
}
			
}
