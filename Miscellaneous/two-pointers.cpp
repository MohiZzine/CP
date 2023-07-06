#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    int n = nums.size();
    vector<pair<int, int>> numsWithIndex(n);
    for (int i = 0; i < n; i++) {
        numsWithIndex[i] = {nums[i], i};
    }
    sort(numsWithIndex.begin(), numsWithIndex.end());
    
    for (int i = 0; i < n; i++) {
    	printf("{%d, %d}\n", numsWithIndex[i].first, numsWithIndex[i].second);
	}
    int i = 0, j = n - 1;
    while (i < j) {
        int sum = numsWithIndex[i].first + numsWithIndex[j].first;
        if (sum == target) {
            result.push_back(numsWithIndex[i].first);
            result.push_back(numsWithIndex[j].first);
            break;
        } else if (sum < target) {
            i++;
        } else {
            j--;
        }
    }
    return result;
}

int main() {
    vector<int> nums = {2, 11, 7, 11, 15};
    int target = 22;
    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No two sum solution" << endl;
    }
    return 0;
    
}
