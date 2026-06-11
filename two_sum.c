int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{

    int sum = 0;
    int *ptr = (int *)malloc(200);
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            sum = nums[i] + nums[j];
            if (sum == target)
            {
                *returnSize = 2;
                ptr[0] = i;
                ptr[1] = j;
                goto end;
            }
        }
        sum = 0;
    }
end:

    return ptr;
}