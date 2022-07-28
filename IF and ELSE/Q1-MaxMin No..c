#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
    {
        printf("Maximum number=%d",num1);
    }
    if (num2>num1)
    {
        printf("Maximum number=%d",num2);
    }
    if (num1==num2)
    {
        printf("Both numbers are equal");
    }  
return 0;
}
//done//