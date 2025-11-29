#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if(k > n) {
        printf("Invalid! k cannot be greater than array size.\n");
        return 0;
    }

    printf("First negatives in each window: ");

    // Slide the window from start to end
    for(int start = 0; start <= n - k; start++) {
        int found = 0;

        // Check each element in the current window
        for(int j = start; j < start + k; j++) {
            if(arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break; // stop at first negative
            }
        }

        if(!found) {
            printf("0 ");
        }
    }

    printf("\n");
    return 0;
}
