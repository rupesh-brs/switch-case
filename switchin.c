
// cprogram to compute the area s of different types of shapes
#include<stdio.h>
void main()
{
	int choice,l,w,r,b,h,a;
	float area;
    printf("ENTER 1 FOR TO GET AREA OF RECTANGLE\n");
    printf("ENTER 2 FOR TO GET AREA OF CIRCLE\n");
    printf("ENTER 3 FOR TO GET AREA OF TRIANGLE\n");
    printf("ENTER 4 FOR TO GET AREA OF SQUARE\n");
    printf("\nenter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		printf("\nenter lenght and width of rectangle:");
    		scanf("%d %d",&l,&w);
    		area=l*w;
    		break;

        case 2:
        	printf("\nenter radius of circle:");
    		scanf("%d",&r);
    		area=3.14*r*r;
    		break;
        case 3:
    		printf("\nenter  base and height:");
    		scanf("%d %d",&b,&w);
    		area=0.5*b*h;
    		break;
        case 4:
    		printf("\nenter side(a for a square):");
    		scanf("%d",&a);
    		area=a*a;
    		break;
    		default :
    			printf("\n  THERE IS NO AREA TO COMPUTE");
 		
	}
	printf("\nTHEREFORE AREA IS %f",area);


}
