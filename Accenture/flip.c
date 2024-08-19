/*
N light bulbs are connected by a wire. Each Bulb has a switch associated with it,
however dur to faluty wiring ,a switch also changees the state of all bulbs to the 
right of current bulbs .Given an intial state of all blubs ,Find the minimum number
of switchws you have to press to turn on all the blubs. You can press the same switch 
multipel times.

** Note : 0 represent the bulb is off and 1 represent bulb is on.
*/

#include <stdio.h>

int main() {
    int arr[] = {0,1,0,1,1,0,0};
    int len = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int flip = 0;  // This keeps track of the number of flips done

    for (int i = 0; i < len; i++) {
        // If flip is even, the current state is as it appears in the array
        // If flip is odd, the current state is the opposite of what appears in the array
        if ((arr[i] == 0 && flip % 2 == 0) || (arr[i] == 1 && flip % 2 == 1)) {
            count++;
            flip++;
        }
    }

    printf("Minimum number of switches needed: %d\n", count);

    return 0;
}
