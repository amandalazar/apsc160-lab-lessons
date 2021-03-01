/*
 * Equivalent while loop to the for loop in "forLoop.c", 
 * from Slide 8 of this week's lesson.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 0;
    while (i < 11) {
        printf(“%d”, i);
        i++;
    }

    system(“PAUSE”);
    return 0;
}
