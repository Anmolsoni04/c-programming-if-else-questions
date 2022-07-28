#include <stdio.h>
int main(){
    char ch;
    printf("Enter any thing:\n");
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z') || (ch>= 'A' && ch<='Z'))
    {
       printf("It is Alphabet");
    }
    else if(ch>= '0' && ch<= '9')
    {
        printf("It is digit!");
    }
    else{
        printf("It is special character!");
    }
    
return 0;
}
//done//