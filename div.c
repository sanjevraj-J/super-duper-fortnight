#include <stdio.h>

int main() {
    int num;
    
   
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
   
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } else if (num % 3 == 0) {
        printf("%d is divisible by 3.\n", num);
    } else if (num % 5 == 0) {
        printf("%d is divisible by 5.\n", num);
    } else {
        printf("%d is not divisible by either 3 or 5.\n", num);
    }
    
    return 0;
}
