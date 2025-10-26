#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <K>\n", argv[0]);
        return 1;
    }
    
    int K = atoi(argv[1]);
    double array[10];
    double result[10];
    
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        int new_pos = (i - K) % 10;
        if (new_pos < 0) new_pos += 10;
        result[new_pos] = array[i];
    }
    
    for(int i = 0; i < 10; i++) {
        printf("%.0f ", result[i]);
    }
    printf("\n");
    
    return 0;
}
