/*

27. Remove Element

Given an integer array nums and an integer val, remove all occurrences 
of val in nums in-place. The order of the elements may be changed. Then return 
the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get 
accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements 
which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.
Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

 

Example 1:

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

0 <= nums.length <= 100
0 <= nums[i] <= 50
0 <= val <= 100

*/



#include <iostream>
#include <vector>
using namespace std;

// function definition
int removeElement(vector<int> nums, int val) {
    int size = nums.size();
    int r=size-1, k=0;
    // cout << "Val = "<<val;

    if(size == 0)
    return 0;
    
    for(int i=0; i<size; i++)
    {
        if(i<r){
        if(nums[i] == val)
        {
            // cout << "Before at "<<i<<" = "<<nums[i]<<"\tat r = "<<nums[r]<<"\n";
            if(nums[r] == val)
            {
                r--;
            }
            swap(nums[i], nums[r]);
            // cout << "After at "<<i<<" = "<<nums[i]<<"\tat r = "<<nums[r]<<"\n";
        }
        k = i;
        // cout << "i = "<<i<<"r = "<<r<<"\n";
        // for (int i = 0; i < 8; i++) {
        //     cout << nums[i] << " ";
        // }
        // cout << "\n\n";
    }
    else
    {
        break;
    }
    }

    return k+1;
}

int main() {

    // declaring and initializing an array of size 8
    
    std::vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    
    // printing array elements
    cout << "Before:\t";
    for (int i = 0; i < 8; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n\n\n";

    // Calling the function
    int result = removeElement(nums, 2);
    
    cout << "After: ";
    for (int i = 0; i < 8; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";

    cout << "k = " << result << endl;

    return 0;
}




/*#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) 
{
    int w, r=numsSize-1;
    
    for(int w=0; w<numsSize; w++)
    {
        if(nums[w] == val)
        {
            // if(nums[r] != val)
            // {
            if(nums[r] != val){
            nums[w] = nums[r];
        }
            r--;
            // }
        }
    }

    return r;
}

int main()
{
    int numsSize = 0;

    printf("Enter size: ");
    scanf("%d", &numsSize);

    int nums[numsSize];

    printf("Enter numbers:\n");
    for(int i=0; i<numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }

    int k = removeElement(nums, numsSize, 2);

    printf("Final numbers:\n");
    for(int i=0; i<numsSize; i++)
    {
        printf("%d\t", nums[i]);
    }
    printf("k = %d\n", k);

    return 0;
}
    */