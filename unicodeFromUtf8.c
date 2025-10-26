#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <utf8_code>\n", argv[0]);
        return 1;
    }
    
    unsigned int utf8 = atoi(argv[1]);
    unsigned int result = 0;
    
    if (utf8 <= 0x7F) {
        result = utf8;
    }
    else if (utf8 <= 0xDFFF) {
        result = ((utf8 >> 8) & 0x1F) << 6;
        result |= (utf8 & 0x3F);
    }
    else if (utf8 <= 0xEFFFFF) {
        result = ((utf8 >> 16) & 0x0F) << 12;
        result |= ((utf8 >> 8) & 0x3F) << 6;
        result |= (utf8 & 0x3F);
    }
    else {
        result = ((utf8 >> 24) & 0x07) << 18;
        result |= ((utf8 >> 16) & 0x3F) << 12;
        result |= ((utf8 >> 8) & 0x3F) << 6;
        result |= (utf8 & 0x3F);
    }
    
    printf("%u\n", result);
    return 0;
}
