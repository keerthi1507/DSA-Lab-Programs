#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Define the structure for a calendar day
struct CalendarDay {
 char* dayName;
 int date;
 char* activity;
};
int main() {
 // Declare an array of 7 CalendarDay structures
 struct CalendarDay calendar[7];
 // Initialize the calendar elements
 for (int i = 0; i < 7; i++) {
 calendar[i].dayName = (char*)malloc(20); // Allocate memory for day name
 calendar[i].activity = (char*)malloc(100); // Allocate memory for activity description
 // You can modify these lines to set specific values for each day
 sprintf(calendar[i].dayName, "Day %d", i + 1);
 calendar[i].date = i + 1;
 sprintf(calendar[i].activity, "Activity for Day %d", i + 1);
 }
 // Print the calendar
 for (int i = 0; i < 7; i++) {
 printf("Day Name: %s\n", calendar[i].dayName);
 printf("Date: %d\n", calendar[i].date);
 printf("Activity: %s\n\n", calendar[i].activity);
 }
 // Free allocated memory
 for (int i = 0; i < 7; i++) {
 free(calendar[i].dayName);
 free(calendar[i].activity);
 }
 return 0;
}
