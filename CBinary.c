#include <stdio.h>
#include <string.h>

char string[300];

char* binaryRepresentation(char character) {
    switch (character) {
        case 'a':
            return "01100001";
        case 'b':
            return "01100010";
        case 'c':
            return "01100011";
        case 'd':
            return "01100100";
        case 'e':
            return "01100101";
        case 'f':
            return "01100110";
        case 'g':
            return "01100111";
        case 'h':
            return "01101000";
        case 'i':
            return "01101001";
        case 'j':
            return "01101010";
        case 'k':
            return "01101011";
        case 'l':
            return "01101100";
        case 'n':
            return "01101110";
        case 'o':
            return "01101111";
        case 'p':
            return "01110000";
        case 'q':
            return "01110001";
        case 'r':
            return "01110010";
        case 't':
            return "01110100";
        default:
            return "";
    }
}

int main() {
    printf("What String Do You Want To Turn Into Binary: ");
    scanf("%s", string);

    for (int i = 0; i < strlen(string); i++) {
        char* binary = binaryRepresentation(string[i]);
        if (strlen(binary) > 0) {
            printf("%s ", binary);
        }
    }

    return 0;
}