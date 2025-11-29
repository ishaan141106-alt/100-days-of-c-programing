#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_so_far = arr[0]; // max sum till now
    int max_ending_here = arr[0]; // max sum ending at current position

    for(int i = 1; i < n; i++) {
        // Either starting  new subarray at arr[i] or extend current subarray
        if(max_ending_here + arr[i] > arr[i]) {
            max_ending_here = max_ending_here + arr[i];
        } else {
            max_ending_here = arr[i];
        }

        // Updating  max_so_far if needed
        if(max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
    }

    printf("Maximum sum of contiguous subarray is: %d\n", max_so_far);

    return 0;
}
