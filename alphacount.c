#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int count[26] = {0}; 
    printf("Input: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) { 
            count[ch - 'a']++;  
        }
    }

    printf("Output:\n");
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }

    return 0;
}
