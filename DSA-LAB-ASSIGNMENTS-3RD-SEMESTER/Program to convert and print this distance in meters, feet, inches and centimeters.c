/*
2: The distance between two cities (in km.) is input through the keyboard. Write a
program to convert and print this distance in meters, feet, inches and
centimeters.

ALGORITHM
1. Input the distance in kilometers.
2. Convert the distance to meters by multiplying by 1000.
3. Convert the distance to feet by multiplying by 3281.
4. Convert the distance to inches by multiplying by 39370.
5. Convert the distance to centimeters by multiplying by 100000.
6. Print the distance in meters, feet, inches, and centimeters.

*/

// SOURCE CODE:
#include <stdio.h>
int main() {
float distance_km, distance_m, distance_ft, distance_in, distance_cm;
printf("Enter distance in kilometers: ");
scanf("%f", &distance_km);
distance_m = distance_km * 1000;
distance_ft = distance_km * 3281;
distance_in = distance_km * 39370;
distance_cm = distance_km * 100000;
printf("Distance in meters: %.2f\n", distance_m);
printf("Distance in feet: %.2f\n", distance_ft);
printf("Distance in inches: %.2f\n", distance_in);
printf("Distance in centimeters: %.2f\n", distance_cm);
return 0;
}

