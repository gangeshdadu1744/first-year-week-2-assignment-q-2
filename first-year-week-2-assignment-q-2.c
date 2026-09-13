#include <stdio.h>

int main() {
    double speed, time,distance, meters, centimeters, millimeters;

    printf("Enter speed in km/h: ");
    scanf("%lf", &speed);

    printf("Enter time in hours: ");
    scanf("%lf", &time);

    distance = speed * time;
    meters = distance * 1000;
    centimeters = distance * 100000;
    millimeters = distance * 1000000;

    printf("Distance in Meters: %.2f \n", meters);
    printf("Distance in Centimeters: %.2f \n", centimeters);
    printf("Distance in Millimeters: %.2f \n", millimeters);

    return 0;
}