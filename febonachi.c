#include <stdio.h>

int main() {
    int feboNum, num1 = 0, num2 = 1, num3;

    printf("Enter the number: ");
    scanf("%d", &feboNum);

    printf("%d %d", num1, num2);

    for (int i = 2; i < feboNum; i++) {
        num3 = num1 + num2;
        printf(" %d", num3);

        num1 = num2;
        num2 = num3;
    }

    return 0;
}
