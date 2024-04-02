#include <stdio.h>

int main() {
    int binary, onesComplement = 0;
    
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    
    int temp = binary;
    int bitPosition = 0;

    // Calculate the number of bits in the binary number
    while (temp > 0) {
        temp >>= 1; // Right shift by 1 bit
        bitPosition++; // Increment the bit position
    }
    
    // Calculate the one's complement
    for (int i = 0; i < bitPosition; i++) {
        int bit = (binary >> i) & 1; // Get the i-th bit of the binary number
        onesComplement |= (!bit << i); // Set the i-th bit of the one's complement
    }
    
    printf("One's complement: %d\n", onesComplement);
    
    return 0;
}
