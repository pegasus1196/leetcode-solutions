/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;
   int* output_array = (int*)malloc(2* sizeof(int));


    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                output_array[0]=i;
                output_array[1]=j;
                *returnSize=2;
                return output_array;

            }
        }
    }
    return 0;
}