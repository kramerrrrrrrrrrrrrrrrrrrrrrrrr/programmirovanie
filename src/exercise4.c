#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <X> <K>\n", argv[0]);
        return 1;
    }
    
    double X = atof(argv[1]);
    int K = atoi(argv[2]);
    double array[10];
    
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }
    
    for(int i = 9; i > K; i--) {
        array[i] = array[i-1];
    }
    array[K] = X;
    
    for(int i = 0; i < 10; i++) {
        printf("%.0f ", array[i]);
    }
    printf("\n");
    
    return 0;
}
