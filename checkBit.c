#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num> <pos>\n", argv[0]);
        return 1;
    }
    
    int num = atoi(argv[1]);
    int pos = atoi(argv[2]);
    
    int bit = (num >> pos) & 1;
    printf("%d\n", bit);
    
    return 0;
}
