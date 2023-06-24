#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> findErrorNums(std::vector<int>& nums) {
    int duplicate = -1;
    int missing = -1;
    std::unordered_set<int> numSet;

    
    for (int num : nums) {
        if (numSet.count(num) > 0) {
            duplicate = num;
        }
        numSet.insert(num);
    }

    
    int sum = (nums.size() * (nums.size() + 1)) / 2;
    int numsSum = 0;
    for (int num : nums) {
        numsSum += num;
    }


    missing = sum - (numsSum - duplicate);

    return { duplicate, missing };
}

int main() {
    std::vector<int> nums = { 1, 2, 2, 4 };
    std::vector<int> result = findErrorNums(nums);

    std::cout << "Result: " << result[0] << ", " << result[1] << std::endl;

    return 0;
}
