#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    
    int num = atoi(argv[1]);
    int r = num & 0xFF;
    int g = (num >> 8) & 0xFF;
    int b = (num >> 16) & 0xFF;
    
    printf("%d %d %d\n", r, g, b);
    
    return 0;
}
