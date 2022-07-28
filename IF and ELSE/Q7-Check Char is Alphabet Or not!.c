#include <stdio.h>
int main(){
    char Alphabet;
    printf("Enter any alphabet here:\n");
    scanf("%c",&Alphabet);
    if ((Alphabet >= 97 && Alphabet<= 122) || (Alphabet>= 65 && Alphabet<= 90))
    {
        printf("Yes it is Alphabet!");
    }
    else{
        printf("No it's not Alphabet");
    }
    
return 0;
}
//done//