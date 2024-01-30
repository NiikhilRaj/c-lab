#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    num1 = num1 ^ num2 ^ (num2 = num1);
    printf("After Swapping\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
