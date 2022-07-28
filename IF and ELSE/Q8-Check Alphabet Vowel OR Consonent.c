#include <stdio.h>
int main(){
    char vowel;
    printf("Enter alphabets here:\n");
    scanf("%c", &vowel);
    if((vowel==97) || (vowel==101) || (vowel == 105) || (vowel == 111) || (vowel ==117))
    {
        printf("Vowel!");
    }
    else{
        printf("Consonent!");
    }
    return 0;
}
    
    
//doubt//