//Write a program using structures to calculate the difference between two time periods using a user-defined function.

#include <stdio.h>

struct Time {
    int hr;
    int min;
    int sec;
};

typedef struct Time Time;

// Function to calculate the difference between two time periods
Time calculateTimeDifference(Time startTime,Time endTime) {
    Time difference;

    // Convert the start time and end time to seconds
    int startTimeInSec = startTime.hr* 3600 + startTime.min * 60 + startTime.sec;
    int endTimeInSec= endTime.hr * 3600 + endTime.min * 60 + endTime.sec;

    // Calculate the absolute difference in seconds
    int absoluteDifferenceInSec = endTimeInSec - startTimeInSec;
    if (absoluteDifferenceInSec < 0)
        absoluteDifferenceInSec = -absoluteDifferenceInSec;

    // Convert the difference in seconds back to hours, minutes, and seconds
    difference.hr = absoluteDifferenceInSec/ 3600;
    difference.min = (absoluteDifferenceInSec% 3600) / 60;
    difference.sec = (absoluteDifferenceInSec % 3600) % 60;

    return difference;
}

int main() {
    Time startTime, endTime, difference;

    printf("Enter the start time:\n");
    printf("Hours: ");
    scanf("%d", &(startTime.hr));
    printf("Minutes: ");
    scanf("%d", &(startTime.min));
    printf("Seconds: ");
    scanf("%d", &(startTime.sec));

    printf("\nEnter the end time:\n");
    printf("Hours: ");
    scanf("%d", &(endTime.hr));
    printf("Minutes: ");
    scanf("%d", &(endTime.min));
    printf("Seconds: ");
    scanf("%d", &(endTime.sec));

    difference = calculateTimeDifference(startTime, endTime);

    printf("\nTime difference: %02d:%02d:%02d\n", difference.hr, difference.min, difference.sec);

    return 0;
}

