# leetcode
Leet code enviroment test problem with c++

## 35. Search Insert Position
```
# test case
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
```
## Solution
```
#include <bits/stdc++.h>
#include "template.cpp"

using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size();

        if (target > nums[high-1])
        {
            return high;
        }

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return low;
    }
};

int main()
{
    // defualt setting
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // use debug template
    // char Char = 'A';
    // int arr[] = {1, 2, 3, 4};
    // bitset<8> Bitset(100);
    // map<string, int> map_String_Int = {{"apple", 5}, {"banana", 3}, {"orange", 7}};

    // debug(Char, arr, Bitset, map_String_Int);

    // 35. Search Insert Position

    // test case 1
    // vector<int> nums = {1, 3, 5, 6};
    // int target = 5;
    // int output = 2;

    // test case 2
    // vector<int> nums = {1, 3, 5, 6};
    // int target = 2;
    // int output = 1;

    // test case 3
    vector<int> nums = {1, 3, 5, 6};
    int target = 7;
    int output = 4;

    class Solution stion;
    int rs = stion.searchInsert(nums, target);
    cout << "return index: " << rs << " output: " << output << endl;
    assert((rs == output));

    return EXIT_SUCCESS;
}
```
