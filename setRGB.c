#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <r> <g> <b>\n", argv[0]);
        return 1;
    }
    
    int r = atoi(argv[1]);
    int g = atoi(argv[2]);
    int b = atoi(argv[3]);
    
    int num = (b << 16) | (g << 8) | r;
    printf("%d\n", num);
    
    return 0;
}
