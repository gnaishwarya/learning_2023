//Compute Total Seconds

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char timeString[9];
    char *token;
    unsigned long hr, min, sec;
    unsigned long totalSeconds;
    
    printf("enter the time in the format hh:mm:ss: ");
    fgets(timeString, sizeof(timeString), stdin);
    timeString[strcspn(timeString, "\n")] = '\0';
    
    // Split the time string into hours, minutes, and seconds
    token = strtok(timeString, ":");
    hr = strtoul(token, NULL, 10);
    
    token = strtok(NULL, ":");
    min = strtoul(token, NULL, 10);
    
    token = strtok(NULL, ":");
    sec = strtoul(token, NULL, 10);
    
    // Compute the total number of seconds
    totalSeconds = (hr * 3600) + (min * 60) + sec;
    
    printf("Total seconds: %lu\n", totalSeconds);
    
    return 0;
}


