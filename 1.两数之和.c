/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ans = (int *)malloc( 2 * sizeof(int));
    int a,b;
    int judge = 0;
    for(a=0; a<numsSize-1; a++)
        for(b=a+1; b<numsSize; b++)
            if(nums[a] + nums[b] == target){
                ans[0] = a;
                ans[1] = b;
                judge = 1;
            }
    
    if(judge == 1)
        *returnSize = 2;
    else if(judge == 0)
        *returnSize = 0;
    
    return ans;
}
// @lc code=end

