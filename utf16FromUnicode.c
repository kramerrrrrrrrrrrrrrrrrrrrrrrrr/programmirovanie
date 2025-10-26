#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <code>\n", argv[0]);
        return 1;
    }
    
    unsigned int code = atoi(argv[1]);
    unsigned int result = 0;
    
    if (code <= 0xFFFF) {
        result = code;
    }
    else {
        code -= 0x10000;
        unsigned int high = (code >> 10) + 0xD800;
        unsigned int low = (code & 0x3FF) + 0xDC00;
        result = (high << 16) | low;
    }
    
    printf("%u\n", result);
    return 0;
}
