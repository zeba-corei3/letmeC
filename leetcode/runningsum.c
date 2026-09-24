#include <stdio.h>
#include <stdlib.h>

int* runningSum(int *nums, int numsSize, int *returnSize) {

    *returnSize = numsSize;
    int *ans = (int *)malloc(sizeof(int)*(*returnSize));

    ans[0] = nums[0];

    for(int i=1; i<numsSize; i++)
    {
        ans[i] = nums[i] + ans[i-1];
    }

    return ans;

}

int main()
{
    int numsSize = 0;

    printf("Enter a number: ");
    scanf("%d", &numsSize);

    
    int *nums = (int *)malloc(numsSize*sizeof(int));
    int *a = (int *)malloc(numsSize*sizeof(int));
    printf("Enter numbers:\n");
    for(int i=0; i<numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }

    a = runningSum(nums, numsSize, &numsSize);

    printf("Running Sum:\n");
    for(int i=0; i<numsSize; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    free(nums);
    free(a);

    return 0;

}
