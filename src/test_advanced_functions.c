#include <stdio.h>
#include <stdlib.h>

// Объявляем наши функции
int max_subarray_sum(int* nums, int size);
int length_of_lis(int* nums, int numsSize);
int* merge(int* intervals, int intervalsSize, int* returnSize);

void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Тест 1: Максимальная сумма подмассива
    printf("Test 1 - Max subarray sum:\n");
    int arr1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result1 = max_subarray_sum(arr1, 9);
    printf("Result: %d\n", result1);
    
    // Тест 2: Длина возрастающей подпоследовательности
    printf("\nTest 2 - Longest increasing subsequence:\n");
    int arr2[] = {10, 9, 2, 3, 7, 101, 18};
    int result2 = length_of_lis(arr2, 7);
    printf("Result: %d\n", result2);
    
    // Тест 3: Объединение интервалов
    printf("\nTest 3 - Merge intervals:\n");
    int intervals[] = {1, 3, 2, 6, 8, 10, 15, 18};
    int returnSize;
    int* result3 = merge(intervals, 8, &returnSize);
    
    printf("Merged intervals: ");
    for (int i = 0; i < returnSize; i += 2) {
        printf("[%d,%d] ", result3[i], result3[i + 1]);
    }
    printf("\n");
    
    free(result3);
    
    return 0;
}
