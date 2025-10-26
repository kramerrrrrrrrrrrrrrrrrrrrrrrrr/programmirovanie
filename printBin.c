#include <stdio.h>
#include <stdlib.h>

void printBin(int num) {
    if (num == 0) {
        printf("0");
        return;
    }
    
    int bits[32];
    int i = 0;
    
    while (num > 0) {
        bits[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    
    int num = atoi(argv[1]);
    printBin(num);
    
    return 0;
}
