#include <stdio.h>
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}
int main()
{
    int choice;
    float temperature;
    do
    {
        printf("\nTemperature Converter\n\n");
        printf("1. Fahrenheit -> Celsius\n");
        printf("2. Celsius -> Fahrenheit\n");
        printf("3. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temperature);
                printf("%.1f Fahrenheit is equal to %.1f Celsius.\n", temperature, fahrenheit_to_celsius(temperature));
                break;
            case 2:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temperature);
                printf("%.1f Celsius is equal to %.1f Fahrenheit.\n", temperature, celsius_to_fahrenheit(temperature));
                break;
            case 3:
                exit(0);
            default:
            {
                printf("Invalid choice! Please enter a valid choice.\n");
            }
        }
    }while(choice!=3);
    return 0;
}
