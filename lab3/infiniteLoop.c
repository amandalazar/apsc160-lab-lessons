/*
 * Infinite loop code example, from Slide 4 of this week's lesson.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 3;
    while (i >= 0) {
        if (i > 0 && i <= 3) {
            printf(“%d\n”, i);
        } else {
            printf(“Surprise!”);
        }
    }

    system(“PAUSE”);
	return 0;
}
