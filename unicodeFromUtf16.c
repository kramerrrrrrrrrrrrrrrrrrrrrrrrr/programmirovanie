#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <utf16_code>\n", argv[0]);
        return 1;
    }
    
    unsigned int utf16 = atoi(argv[1]);
    unsigned int result = 0;
    
    if (utf16 <= 0xFFFF) {
        result = utf16;
    }
    else {
        unsigned int high = (utf16 >> 16) & 0xFFFF;
        unsigned int low = utf16 & 0xFFFF;
        result = ((high - 0xD800) << 10) + (low - 0xDC00) + 0x10000;
    }
    
    printf("%u\n", result);
    return 0;
}
