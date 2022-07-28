#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if ((n%5==0)&&(n%11==0))
    {
        printf("n is divisible by both 5 and 11\n");
    } 
    if (n%5==0)
    {
        printf("n is divisible by 5 only");
    }
    if (n%11==0)
    {
        printf("n is divisible by 11 only");
    }
return 0;
}
//done//