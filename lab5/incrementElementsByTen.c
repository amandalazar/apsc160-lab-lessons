/*
 * Purpose: Increment all values of an array by 10
 * (Example 2, Slide 4 of this week's lesson)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int data[5] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 5; i++) {
    	data[i] += 10;
    	printf("New value at index %d is %d\n", i, data[i]);
    }

    system(“PAUSE”);
    return 0;
}
