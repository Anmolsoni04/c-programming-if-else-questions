#include <stdio.h>
int main(){
    int month;
    printf("Enter the month number:\n");
    scanf("%d", &month);
    if((month==1) || (month==3) || (month==5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
    {
        printf("These months have 31 days");
    }
    else if((month==4) || (month==6) || (month==9) || (month==11))
    {
        printf("These months have 30 days");
    }
    else{
        printf("The month is february");
    }
return 0;
}
// 
done//