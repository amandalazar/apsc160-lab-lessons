/*
 * Sample solution for preLab #7.
 *
 * This program implements a simple counter, that counts the
 * number of elapsed seconds.  The counter has both a start
 * value and a stop value.
 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h> // Needed for the Sleep() function, to ensure we count up every second

#include <DAQlib.h>

#define TRUE 1
#define FALSE 0

/* The input channels for the two switches */
#define RUN_SWITCH 0 // Runs/freezes the count
#define RESET_SWITCH 1

/* The states of the switches */
#define SWITCH_ON 1
#define SWITCH_OFF 0

/* Number of LED displays in the LED screen */
#define NUM_DISPLAYS 8

/* Value to write to the LED display to turn it off (space) */
#define SPACE_CHAR 0

/* 1 second = 1000 miliseconds for the delay */
#define DELAY_TIME 1000

/* function prototypes for all the functions implemented here */
void WorkFunction();
void writeNumber(int number); // Accessible Monday March 29, for use in Lab 7
void writeDigit(int digit, int position); // Accessible Monday March 29, for use in Lab 7


int main(void)
{
    int setupNum;

    printf("Enter configuration type (0 for the device or 4 for the simulator): "); // Need to enter 4
    scanf("%d", &setupNum);

    if ( setupDAQ(setupNum) == TRUE )
        WorkFunction();
    else
        printf("ERROR: Cannot initialise system\n");

    system("PAUSE");
    return 0;
}

/* Implements the counter logic. */
/* Read the two switches and act accordingly. */
void WorkFunction()
{
    while( continueSuperLoop() == TRUE )
    {
    	// write your code here
    }
}

/*
 * Writes the number to the LED screen.
 * Only write as many digits of the number as will fit on the
 * LED screen.
 */
void writeNumber(int number)
{
    // TBD
    // Accessible Monday March 29, for use in Lab 7
}

/*
 * The following function writes the given "digit"
 * to the LED display at "position"
 */
void writeDigit(int digit, int position)
{
    // TBD
    // Accessible Monday March 29, for use in Lab 7
}