//Write a program to convert Celsius form of temperature into Fahrenheit and vice versa. 
#include <stdio.h>
int main()
{
    float num;
    printf("Enter celsius : ");
    fflush(stdout);
    scanf("%f", &num);
    printf("Fahrenheit is : %0.2f", (num * 9/ 5)  + 32);
    return 0;
}