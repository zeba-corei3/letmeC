/*

448. Find All Numbers Disappeared in an Array

Given an array nums of n integers where nums[i] is in the range [1, n],
return an array of all the integers in the range [1, n] that do not appear in nums.

Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

Example 2:
Input: nums = [1,1]
Output: [2]

Constraints:
n == nums.length
1 <= n <= 105
1 <= nums[i] <= n

Follow up: Could you do it without extra space and in O(n) runtime? 
You may assume the returned list does not count as extra space.

all[n+1] = [0,0,0,0,0,0,0,0]

*/

#include <vector>
#include <iostream>

using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums)
{
    int n = nums.size();
    vector<int> ans;
    cout << "n = "<<n<<endl;
    vector<int> missing(n+1, 0);

    for(int i=0; i<n; i++)
    {
        if(missing[nums[i]] == 0)
        {
            missing[nums[i]] = 1;
        }
    }

    for(int i=1; i<n+1; i++)
    {
        if(missing[i] == 0)
        {   
            // cout << "missing = "<< i << "\n";
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    vector<int> nums;

    vector<int> res;
    
    res = findDisappearedNumbers(nums);

    return 0;
    // for(int i=0; i<res.size(); i++)
    // cout << res[i] << "\n";

}