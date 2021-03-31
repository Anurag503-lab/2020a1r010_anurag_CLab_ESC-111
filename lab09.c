
#include<stdio.h>
int main()
{

int lenght , breadth , area ,perimeter ;
printf("please enter the length of rectangle\n");
scanf("%d",&lenght);
printf("please enter the breadth of the rectangle\n");
scanf("%d",&breadth);

area = lenght * breadth;

perimeter = 2*lenght +2*breadth;

printf("area = %d\n", area);
printf("perimeter = %d\n",perimeter);
 return 0;
}


