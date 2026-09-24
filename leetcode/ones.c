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


#include <stdlib.h>
#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int c=0, cmax = 0;

    for(int i=0; i<numsSize; i++)
    {
        // printf("\n\ni = %d\tnums = %d\n", i, nums[i]);
        
        if(nums[i] == 0)
        {
            // printf("current is 0\t");
            c = 0;
        }
        else
        {
            // printf("C was %d,", c);
            if(nums[i] == 1)
            {c++;}
            // printf(" now is %d", c);
        }
         if(cmax < c)
            {
                // printf("cmax = %d\tc=%d\t", cmax, c);
                cmax = c;
            }
    }
    return cmax;
}

int main()
{
    int n=0;

    printf("Enter n: ");
    scanf("%d", &n);

    int nums[n];

    for(int i=0; i<n; i++)
    {
        nums[i] = rand()%2;
    }

    for(int i=0; i<n; i++)
    printf("%d  ", nums[i]);

    int c = findMaxConsecutiveOnes(nums, n);

    return 0;
}
