/*
 * Overstepping array boundaries code sample (Example 3, Slide 5 of this week's lesson).
 * Program aims to compute the class average for a test.
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM_STUDENTS 10

int main(void) {
    double testScores[NUM_STUDENTS] = {66.0, 90.0, 85.5, 68.5, 55.0, 82.5, 45.0, 87.0, 75.0, 75.0};
    double sum = 0.0;
    double average;

    // Sum up all test scores
    for (int i = 0; i <= NUM_STUDENTS; i++) {
        sum += testScores[i];
    }

    // Compute class average
    average = sum / NUM_STUDENTS;

    printf("Computed class average: %.2lf%%", average);

    system(“PAUSE”);
    return 0;
}
