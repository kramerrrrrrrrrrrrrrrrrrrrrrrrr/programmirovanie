#include <stdio.h>
#include "array_functions.h"

void print_array(int* arr, size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Тест 1: объединение массивов
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 3, 4};
    int result[6];
    
    printf("Test 1 - Join arrays:\n");
    join_int_arrays(arr1, 3, arr2, 3, result);
    print_array(result, 6);
    
    // Тест 2: объединение и сортировка
    printf("Test 2 - Join and sort arrays:\n");
    join_and_sort_int_arrays(arr1, 3, arr2, 3, result);
    print_array(result, 6);
    
    // Тест 3: поиск минимума и максимума
    printf("Test 3 - Min and max:\n");
    int test_arr[] = {5, 2, 8, 1, 9, 3};
    int min, max;
    get_min_and_max_from_int_array(test_arr, 6, &min, &max);
    printf("Min: %d, Max: %d\n", min, max);
    
    return 0;
}
