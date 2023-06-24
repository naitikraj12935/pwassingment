#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    int k = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++; 
        }
    }

    return k;
}

int main() {
    std::vector<int> nums = { 3, 2, 2, 3 };
    int val = 3;
    int result = removeElement(nums, val);

    std::cout << "Number of elements not equal to val: " << result << std::endl;
    std::cout << "Updated nums: ";
    for (int i = 0; i < result; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
