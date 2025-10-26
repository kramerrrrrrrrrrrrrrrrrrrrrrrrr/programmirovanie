#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <code>\n", argv[0]);
        return 1;
    }
    
    unsigned int code = atoi(argv[1]);
    unsigned int result = 0;
    
    if (code <= 0x7F) {
        result = code;
    }
    else if (code <= 0x7FF) {
        result = ((0xC0 | (code >> 6)) << 8) | (0x80 | (code & 0x3F));
    }
    else if (code <= 0xFFFF) {
        result = ((0xE0 | (code >> 12)) << 16) | ((0x80 | ((code >> 6) & 0x3F)) << 8) | (0x80 | (code & 0x3F));
    }
    else if (code <= 0x10FFFF) {
        result = ((0xF0 | (code >> 18)) << 24) | ((0x80 | ((code >> 12) & 0x3F)) << 16) | ((0x80 | ((code >> 6) & 0x3F)) << 8) | (0x80 | (code & 0x3F));
    }
    
    printf("%u\n", result);
    return 0;
}
