#include <stdlib.h>

// Функция 1: Максимальная сумма подмассива
int max_subarray_sum(int* nums, int size) {
    if (size == 0) return 0;
    
    int max_sum = nums[0];
    int current_sum = nums[0];
    
    for (int i = 1; i < size; i++) {
        if (current_sum < 0) {
            current_sum = nums[i];
        } else {
            current_sum += nums[i];
        }
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    return max_sum;
}

// Функция 2: Длина самой длинной возрастающей подпоследовательности
int length_of_lis(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    
    int dp[numsSize];
    int max_length = 1;
    
    for (int i = 0; i < numsSize; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
            }
        }
        if (dp[i] > max_length) {
            max_length = dp[i];
        }
    }
    
    return max_length;
}

// Функция 3: Объединение интервалов
int* merge(int* intervals, int intervalsSize, int* returnSize) {
    if (intervalsSize == 0) {
        *returnSize = 0;
        return NULL;
    }
    
    // Сортируем интервалы по начальной точке
    for (int i = 0; i < intervalsSize - 1; i += 2) {
        for (int j = i + 2; j < intervalsSize - 1; j += 2) {
            if (intervals[i] > intervals[j]) {
                int temp_start = intervals[i];
                int temp_end = intervals[i + 1];
                intervals[i] = intervals[j];
                intervals[i + 1] = intervals[j + 1];
                intervals[j] = temp_start;
                intervals[j + 1] = temp_end;
            }
        }
    }
    
    // Создаем временный массив для результата
    int* result = malloc(intervalsSize * sizeof(int));
    int result_index = 0;
    
    result[0] = intervals[0];
    result[1] = intervals[1];
    
    for (int i = 2; i < intervalsSize; i += 2) {
        int current_start = intervals[i];
        int current_end = intervals[i + 1];
        int last_end = result[result_index + 1];
        
        if (current_start <= last_end) {
            if (current_end > last_end) {
                result[result_index + 1] = current_end;
            }
        } else {
            result_index += 2;
            result[result_index] = current_start;
            result[result_index + 1] = current_end;
        }
    }
    
    *returnSize = result_index + 2;
    return result;
}
