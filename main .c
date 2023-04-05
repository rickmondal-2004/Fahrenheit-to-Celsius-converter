#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Formula to convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5/9;

    printf("%.2f Fahrenheit is equal to %.2f Celsius", fahrenheit, celsius);
    
    return 0;
}
