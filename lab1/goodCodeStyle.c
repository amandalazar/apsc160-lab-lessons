/*
 * Author: Example Student
 * Purpose: Given a running distance in meters, print the [min.] number of
 * lengths of a running track run
 */

#include <stdio.h>
#include <stdlib.h>

#define LENGTH_RUNNING_TRACK 400

int main(void) {
	int distanceInMeters;
	int numTrackLengths;

	printf(“Please enter your running distance in meters:\n”);
	scanf(“%d”, &distanceInMeters);

	numTrackLengths = distanceInMeters / LENGTH_RUNNING_TRACK;
	
	printf(“You ran %d length(s) of a running track.”, numTrackLengths);

	system(“PAUSE”);
	return 0;
}
