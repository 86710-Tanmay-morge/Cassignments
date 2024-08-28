#include <stdio.h>
#include <string.h>
#define MAX_STRINGS 10
#define MAX_LENGTH 50
int is_duplicate(char *str, char *duplicates[], int count) {
    for (int i = 0; i < count; i++) {
        if (strcmp(str, duplicates[i]) == 0) {
            return 1;
        }
    }
    return 0; 
}

int main() {
    char *strings[MAX_STRINGS] = {
        "apple",
        "banana",
        "orange",
        "apple",
        "grape",
        "banana",
        "kiwi",
        "orange",
        "pear",
        "kiwi"
    };

    int n = 10; 
    char *duplicates[MAX_STRINGS];
    int duplicate_count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) == 0) {
                if (!is_duplicate(strings[i], duplicates, duplicate_count)) {
                    duplicates[duplicate_count++] = strings[i];
                }
                break; 
            }
        }
    }
    printf("Duplicated strings:\n");
    if (duplicate_count == 0) {
        printf("No duplicates found.\n");
    } else {
        for (int i = 0; i < duplicate_count; i++) {
            printf("%s\n", duplicates[i]);
        }
    }

    return 0;
}
