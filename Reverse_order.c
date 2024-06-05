#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);
    
    printf("Reversed text: ");
    for (int i = strlen(text) - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }
    
    return 0;
}
