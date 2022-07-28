#include <stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if (n>0)
    {
        printf("n is positive=",n);
    }
    if (n<0)
    {
        printf("n is negative",n);
    }
    if (n==0){
        printf("n is zero",n);
    }  
return 0;
}
//done//