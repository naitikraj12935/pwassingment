#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& nums) {
    int nonZeroPtr = 0;

    for (int currPtr = 0; currPtr < nums.size(); currPtr++) {
        if (nums[currPtr] != 0) {
            nums[nonZeroPtr] = nums[currPtr];
            nonZeroPtr++;
        }
    }

   
    while (nonZeroPtr < nums.size()) {
        nums[nonZeroPtr] = 0;
        nonZeroPtr++;
    }
}

int main() {
    std::vector<int> nums = { 0, 1, 0, 3, 12 };
    moveZeroes(nums);

    std::cout << "Result: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
