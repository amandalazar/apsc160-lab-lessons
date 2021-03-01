/*
 * Code sample to demonstrate that C arrays use zero-based indexing
 * (Example 1, Slide 3 of this week's lesson)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int data[5] = {1, 2, 3, 4, 5};
    printf("%d", data[1]);

    system(“PAUSE”);
    return 0;
}
