/*
10. The distance between two cities (in km.) is input through the keyboard. Write
a program to convert and print this distance in meters, feet, inches and
centimeters.

ALGORITHM:
1. Take input of the distance between two cities in kilometers from the keyboard.
2. Convert kilometers to meters by multiplying with 1000 and store the result in a variable
meter.
3. Convert meters to feet by multiplying with 3.281 and store the result in a variable feet.
4. Convert feet to inches by multiplying with 12 and store the result in a variable inches.
5. Convert inches to centimeters by multiplying with 2.54 and store the result in a variable
centimeters.
6. Print the values of meter, feet, inches, and centimeters.

*/

// SOURCE CODE:
#include <stdio.h>
int main() {
float distance_km, meter, feet, inches, centimeters;
printf("Enter the distance between two cities in kilometers: ");
scanf("%f", &distance_km);
meter = distance_km * 1000;
feet = meter * 3.281;
inches = feet * 12;
centimeters = inches * 2.54;
printf("Distance in meters: %f\nDistance in feet: %f\nDistance in inches: %f\nDistance in
centimeters: %f\n", meter, feet, inches, centimeters);
return 0;
}