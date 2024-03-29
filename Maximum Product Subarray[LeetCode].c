#define min(a, b) (a < b ? a : b)
#define max(a ,b) (a < b ? b : a)

int maxProduct(int* nums, int numsSize)
{
    if(numsSize == 1) return nums[0];
    int maxP = 1, minP = 1, result = INT_MIN;
    for(int i=0; i<numsSize; i++)
    {
        int temp = minP;
        minP = min(nums[i], min(minP*nums[i], maxP*nums[i]));
        maxP = max(nums[i], max(temp*nums[i], maxP*nums[i]));
        result = max(result, maxP);
    }
    return result;
}
