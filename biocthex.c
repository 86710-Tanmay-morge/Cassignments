#include <stdio.h>
void print_binary(int num) {
    int i;
    printf("Binary equivalent : ");
    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}
void print_octal(int num) {
    if (num == 0)
        return;
    print_octal(num / 8);
    printf("%d", num % 8);
}
void print_hexadecimal(int num) {
    if (num == 0)
        return;
    print_hexadecimal(num / 16);
    int remainder = num % 16;
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", 'A' + (remainder - 10));
    }
}

int main() {
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    printf("Given Number : %d\n", num);
    print_binary(num);
    printf("Octal equivalent : ");
    if (num == 0) {
        printf("0");
    } else {
        print_octal(num);
    }
    printf("\n");
    printf("Hexadecimal equivalent : ");
    if (num == 0) {
        printf("0");
    } else {
        print_hexadecimal(num);
    }
    printf("\n");

    return 0;
}
