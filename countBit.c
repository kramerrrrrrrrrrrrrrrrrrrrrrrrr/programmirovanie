#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    
    int num = atoi(argv[1]);
    int count = 0;
    
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    
    printf("%d\n", count);
    
    return 0;
}
