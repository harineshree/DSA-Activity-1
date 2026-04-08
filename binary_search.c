#include <stdio.h>

int binarySearch(int nums[], int size, int target) {
    int left = 0, right = size - 1;

    while(left <= right) {
        int mid = (left + right) / 2;

        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int nums[] = {-1,0,3,5,9,12};
    int size = 6;
    int target = 9;

    printf("Output: %d", binarySearch(nums, size, target));
    return 0;
}
