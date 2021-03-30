#include <stdio.h>
int main()
{
    int num1,num2,diff;
    /*declaration of variables*/

    printf("Please enter the first number\n");
    scanf("%d",&num1);
    printf("Please enter the second number\n");
    scanf("%d",&num2);

    diff = num1-num2;
    /*for calculating difference between two numbers*/

    printf("difference=%d",diff);
    return 0;


}