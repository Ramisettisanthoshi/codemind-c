#include <stdio.h>

float convertToCelsius(float Fahrenheit) {
    return (Fahrenheit- 32) * 5 / 9;
}

int main() {
    float Fahrenheit, celsius;
    scanf("%f",&Fahrenheit);
    
    celsius = convertToCelsius(Fahrenheit);
    
    printf("%.2f
", celsius);
    
    return 0;
}