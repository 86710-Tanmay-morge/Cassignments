#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50
int compareNames(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}
int main() {
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int n, i;
    printf("Enter the number of students (up to 10): ");
    scanf("%d", &n);
    if (n < 1 || n > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 1;
    }
    getchar();
    printf("Enter the names of the students:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        fgets(nameOfStudents[i], MAX_NAME_LENGTH, stdin);
        nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = '\0';
    }
    qsort(nameOfStudents, n, MAX_NAME_LENGTH, compareNames);
    printf("\nSorted list of students:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", nameOfStudents[i]);
    }
    return 0;
}
