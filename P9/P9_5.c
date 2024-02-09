#include <stdio.h>

int main() {
    int binary_number, ones_complement = 0;
    
    printf("Enter a binary number: ");
    scanf("%d", &binary_number);
    
    int temp = binary_number;
    int bit_position = 0;

    while (temp > 0) {
        temp >>= 1;
        bit_position++;
    }
    
    for (int i = 0; i < bit_position; i++) {
        int bit = (binary_number >> i) & 1;
        ones_complement |= (!bit << i);
    }
    
    printf("One's complement: %d\n", ones_complement);
    
    return 0;
}
