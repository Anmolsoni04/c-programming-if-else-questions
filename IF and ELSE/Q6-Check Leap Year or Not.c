#include <stdio.h>
int main(){
    int year;
    printf("Enter the year here-");
    scanf("%d",&year);
    if(year%4==0){
        printf("Yes it is leap year!");
    }
    else{
        printf("It's not a leap year!");
    }
return 0;
}
//done//