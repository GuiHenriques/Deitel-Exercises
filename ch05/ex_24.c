// Conversões de temperatura.
# include <stdio.h>

float toFahrenheit(float);
float toCelsius(float);

int main(void) 
{
    float celsius, fahrenheit;

    printf("%10s %10s\n", "Celsius", "Fahrenheit");
    for (float celsius = 0; celsius <= 100; celsius++)
    {
        printf("%10.2f %10.2f\n", celsius, toFahrenheit(celsius));
    }
    
    printf("\n");
    
    printf("\n%10s %10s\n", "Fahrenheit", "Celsius");
    for (float fahrenheit = 32; fahrenheit <= 212; fahrenheit++)
    {
        printf("%10.2f %10.2f\n", fahrenheit, toCelsius(fahrenheit));
    }
}

float toFahrenheit(float celsius) 
{
    return celsius * 9 / 5 + 32;
}

float toCelsius(float fahrenheit) 
{
    return (fahrenheit - 32) * 5 / 9;
}