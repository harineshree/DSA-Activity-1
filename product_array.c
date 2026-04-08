#include <stdio.h>

void productExceptSelf(int nums[], int size, int result[]) {
    int left = 1;

    for(int i = 0; i < size; i++) {
        result[i] = left;
        left *= nums[i];
    }

    int right = 1;
    for(int i = size - 1; i >= 0; i--) {
        result[i] *= right;
        right *= nums[i];
    }
}

int main() {
    int nums[] = {1,2,3,4};
    int size = 4;
    int result[4];

    productExceptSelf(nums, size, result);

    for(int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
