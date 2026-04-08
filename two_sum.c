#include <stdio.h>

int* twoSum(int nums[], int size, int target) {
    static int result[2];
    
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL;
}

int main() {
    int nums[] = {2,7,11,15};
    int target = 9;
    int size = 4;

    int *res = twoSum(nums, size, target);
    printf("[%d, %d]", res[0], res[1]);

    return 0;
}
