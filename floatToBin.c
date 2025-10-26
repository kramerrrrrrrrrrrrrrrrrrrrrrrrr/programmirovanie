#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    
    float num = atof(argv[1]);
    unsigned int *p = (unsigned int*)&num;
    
    for (int i = 31; i >= 0; i--) {
        printf("%d", (*p >> i) & 1);
        if (i == 31 || i == 23) printf(" ");
    }
    printf("\n");
    
    return 0;
}
