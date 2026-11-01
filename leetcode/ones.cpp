
/*

485. Max Consecutive Ones

Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. 
The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2

Constraints:
1 <= nums.length <= 105
nums[i] is either 0 or 1.
*/

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    bool prev = 1;
    int count = 0;
    int max1 = count;

    for(int i=0; i<nums.size(); i++)
    {
        if(prev != 0 && nums[i] == 1)
            {count++;
            }
        else
            {count = 0;}
        // cout<<"nums[i] = "<<nums[i]<<"\tcount = "<<count<<"\n";
        max1 = max(max1, count);
    }
    return count;
}

int main()
{
    vector<int> num = {1,0,1,1,0,1};

    int c = findMaxConsecutiveOnes(num);

    cout << "count = " << c << endl;

    return 0;
}