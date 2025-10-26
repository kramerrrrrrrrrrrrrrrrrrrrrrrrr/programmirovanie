#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num> <pos>\n", argv[0]);
        return 1;
    }
    
    int num = atoi(argv[1]);
    int pos = atoi(argv[2]);
    
    num = num | (1 << pos);
    printf("%d\n", num);
    
    return 0;
}
