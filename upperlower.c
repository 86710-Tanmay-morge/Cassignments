#include <stdio.h>
#include <ctype.h> 
int main() {
    char str[100];
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    for(int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            uppercase++;
        } else if (islower(str[i])) {
            lowercase++;
        } else if (isdigit(str[i])) {
            digits++;
        } else {
            others++;
        }
    }
    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Other characters: %d\n", others);
    return 0;
}
