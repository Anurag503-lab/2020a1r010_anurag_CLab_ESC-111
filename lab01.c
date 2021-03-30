#include <stdio.h>
int main()
{
    int num1,num2,sum;
    /*Declaration of variables*/

    printf("Please enter the first number\n");
    scanf("%d",&num1);
    printf("Please enter the second number\n");
    scanf("%d",&num2);
    
    sum = num1 + num2;
    /*For calculating sum of two numbers*/

    printf("sum=%d\n", sum);
    return 0;

}