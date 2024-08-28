#include <stdio.h>
#include <string.h>

int main() {
    char *strings[] = {
        "apple",
        "banana",
        "orange",
        "apple",
        "grape",
        "banana",
        "kiwi"
    };

    int n = sizeof(strings) / sizeof(strings[0]);
    int i, j;
    int found_duplicate = 0;

    printf("Duplicated strings in the array:\n");
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) == 0) {
                printf("%s\n", strings[i]);
                found_duplicate = 1;
                break; 
            }
        }
    }
    if (!found_duplicate) {
        printf("No duplicates found.\n");
    }
    return 0;
}
