#include <stdio.h>
#include <ctype.h>

void encrypt(char *text, int shift, char *result) {
    int i = 0;
    while (text[i] != '\0') {
        if (isalpha(text[i])) {
            char base = isupper(text[i]) ? 'A' : 'a';
            result[i] = (text[i] - base + shift) % 26 + base;
        } else {
            result[i] = text[i];
        }
        i++;
    }
    result[i] = '\0'; 
}

void decrypt(char *text, int shift, char *result) {
    encrypt(text, -shift, result);
}

int main() {
    char text[] = "Hello world";
    int shift = 3;    
    char encrypted[256];
    char decrypted[256];

    encrypt(text, shift, encrypted);
    decrypt(encrypted, shift, decrypted);

    printf("Original: %s\n", text);
    printf("Encrypted: %s\n", encrypted);
    printf("Decrypted: %s\n", decrypted);

    return 0;
}
