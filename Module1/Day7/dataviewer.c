//Data Viewer:Write an application in to view the log stored in data.csv

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

// Structure to hold each log entry
typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
} LogEntry;

int readLogFile(LogEntry logArray[]) {
    FILE *file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 0;
    }

    char line[100];
    int entryCount = 0;
    while (fgets(line, sizeof(line), file)) {
        // Tokenize the line by commas
        char *token;
        token = strtok(line, ",");
        
        // Store the values in the log structure
        logArray[entryCount].entryNo = atoi(token);
        token = strtok(NULL, ",");
        strcpy(logArray[entryCount].sensorNo, token);
        token = strtok(NULL, ",");
        logArray[entryCount].temperature = atof(token);
        token = strtok(NULL, ",");
        logArray[entryCount].humidity = atoi(token);
        token = strtok(NULL, ",");
        logArray[entryCount].light = atoi(token);
        token = strtok(NULL, ",");
        strcpy(logArray[entryCount].time, token);

        entryCount++;
    }

    fclose(file);
    return entryCount;
}

// Function to display the contents of the array of structures
void displayLogEntries(LogEntry logArray[], int entryCount) {
	int i;
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    for (i = 0; i < entryCount; i++) {
        printf("%d\t%s\t%.1f\t\t%d\t\t%d\t%s\n",
               logArray[i].entryNo,
               logArray[i].sensorNo,
               logArray[i].temperature,
               logArray[i].humidity,
               logArray[i].light,
               logArray[i].time);
    }
}

int main() {
    LogEntry logArray[MAX_ENTRIES];
    int entryCount = readLogFile(logArray);

    if (entryCount > 0) {
        displayLogEntries(logArray, entryCount);
    } else {
        printf("No log entries found.\n");
    }

    return 0;
}

