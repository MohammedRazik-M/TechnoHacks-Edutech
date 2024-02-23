#include<stdio.h>
//Function initialization
void decimal_to_Binary(int n);
void decimal_to_Octal(int n);
void decimal_to_Hexadecimal(int n);
int main()
{
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    decimal_to_Binary(decimalNumber);
    decimal_to_Octal(decimalNumber);
    decimal_to_Hexadecimal(decimalNumber);
    return 0;
}
// Function declaration
void decimal_to_Binary(int n)
{
    printf("Binary equivalent: ");
    if (n == 0)
    {
        printf("0");
        return;
    }
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
// Function to convert decimal to octal
void decimal_to_Octal(int n) {
    printf("Octal equivalent: %o\n", n);
}
// Function to convert decimal to hexadecimal
void decimal_to_Hexadecimal(int n) {
    printf("Hexadecimal equivalent: %X\n", n);
}
