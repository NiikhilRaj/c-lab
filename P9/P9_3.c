#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int freq0 = 0, freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0,
        freq5 = 0, freq6 = 0, freq7 = 0, freq8 = 0, freq9 = 0;
    
    while (number > 0) {
        int digit = number % 10; 
        
    
        switch (digit) {
            case 0: freq0++; break;
            case 1: freq1++; break;
            case 2: freq2++; break;
            case 3: freq3++; break;
            case 4: freq4++; break;
            case 5: freq5++; break;
            case 6: freq6++; break;
            case 7: freq7++; break;
            case 8: freq8++; break;
            case 9: freq9++; break;
        }
        
        number /= 10; 
    }
    
    printf("Frequency of 0: %d\n", freq0);
    printf("Frequency of 1: %d\n", freq1);
    printf("Frequency of 2: %d\n", freq2);
    printf("Frequency of 3: %d\n", freq3);
    printf("Frequency of 4: %d\n", freq4);
    printf("Frequency of 5: %d\n", freq5);
    printf("Frequency of 6: %d\n", freq6);
    printf("Frequency of 7: %d\n", freq7);
    printf("Frequency of 8: %d\n", freq8);
    printf("Frequency of 9: %d\n", freq9);
    
    return 0;
}
