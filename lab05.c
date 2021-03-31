#include<stdio.h>
int main()
{

int a,b,c;
/*declaration of variables*/

printf("enter two numbers\n");
scanf("%d\n %d",&a,&b);

c = a % b;
/*for calculating remainder*/

printf("remainder is %d",c);
return 0;
}