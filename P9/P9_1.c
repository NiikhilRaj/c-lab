#include <stdio.h>
#include<math.h>

int main() {
    int number, original_number, swapped_number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    original_number = number;
    int num_digits = 0;
    while (number > 0) {
        number /= 10;
        num_digits++;
    }
    
    number = original_number;
    
    int first_digit = number / 1;
    int last_digit = number % 10;  
   
    number /= 10;
    
    original_number %= (int)(pow(10, num_digits - 1));
    swapped_number = last_digit * (int)(pow(10, num_digits - 1)) + 
                    original_number % (int)(pow(10, num_digits - 1)) * 10 + 
                    first_digit;
    
    printf("Swapped number: %d\n", swapped_number);
    
    return 0;
}
