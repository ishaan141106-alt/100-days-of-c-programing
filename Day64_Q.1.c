//Write a program to take a string s as input. 
//The task is to find the length of the longest substring without repeating characters. 
//Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    int maxLen = 0;

    // Check every possible starting point
    for (int start = 0; s[start] != '\0'; start++) {
        int visited[256] = {0};   // To mark which characters are used
        int currentLen = 0;

        // Build substring starting from 'start'
        for (int end = start; s[end] != '\0'; end++) {

            // If character already exists, break
            if (visited[(int)s[end]] == 1) {
                break;
            }

            visited[(int)s[end]] = 1;  // mark character as used
            currentLen++;
        }

        // Update max length
        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("Longest substring length without repeating characters = %d\n", maxLen);

    return 0;
}
