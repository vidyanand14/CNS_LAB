#include <stdio.h>

int main() {
    char str[] = "Hello world";
    int i;
    
    printf("Original string: %s\n", str);
    
    // AND operation with 127
    printf("AND with 127: ");
    for (i = 0; str[i] != '\0'; i++) {
        char result = str[i] & 127;
        printf("%c", result);
    }
    printf("\n");

    // XOR operation with 127
    printf("XOR with 127: ");
    for (i = 0; str[i] != '\0'; i++) {
        char result = str[i] ^ 127;
        printf("%c", result);
    }
    printf("\n");

    return 0;
}
