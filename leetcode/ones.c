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
    int cnt = 0, final = 0;

    for(int i=0; i<numsSize; i++)
    {
        printf("\nfor %d nums = %d\n", i, nums[i]);

        if(nums[i] == 1 && cnt == 0)
        {
            cnt=1;
            printf("condition if: cnt = %d\t", cnt);
        }
        else if(nums[i]==1 && nums[i-1] == 1)
        {
            final = cnt++;
            printf("condition else if: cnt = %d\t", cnt);
        }
        else{
            final = cnt;
            cnt =0;
            printf("condition else: cnt = %d\t", cnt);
            continue;
        }
        printf("\n");
    }
    final = cnt;

    printf("Count = %d\n", final);
    return final;
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