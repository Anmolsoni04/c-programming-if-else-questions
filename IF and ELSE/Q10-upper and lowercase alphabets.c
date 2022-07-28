#include <stdio.h>
int main(){
    char ch;
    printf("Enter any alphabet:\n");
    scanf("%c",&ch);
    if((ch>= 'a') && (ch<='z')){
        printf("It is lowercase letter");
    }
    if ((ch>= 'A') && (ch<= 'Z'))
    {
        printf("It is Uppercase letter");
    }
return 0;
} 
//done//  