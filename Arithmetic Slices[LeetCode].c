int numberOfArithmeticSlices(int* nums, int numsSize)
{
int count = 0; 
for (int i = 0; i < numsSize-1; i++)
{
int diff = nums[i + 1] - nums[i]; 
int j = i + 2; 
while (j < numsSize && nums[j] - nums[j - 1] == diff) 
{ 
count++; 
j++; 
}
}
return count;
}
