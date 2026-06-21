int balanceChest(int nums[], int len){
	return balanceChestSupport(0, nums, len, 0, 0, 0, 0);
}
int balanceChestSupport(int start, int nums[], int len, int ga, int gb, int countA, int countB){
	if(start == len)
		return ((ga == gb) && (countA == countB));
	if(nums[start] % 4 == 0){
		return balanceChestSupport(start + 1, nums, len, ga + nums[start], gb, countA + 1, countB);
	}	
	if(nums[start] % 5 == 0)
		return balanceChestSupport(start + 1, nums, len, ga, gb + nums[start], countA, countB + 1);
	return balanceChestSupport(start + 1, nums, len, ga + nums[start], gb, countA + 1, countB) || 
		balanceChestSupport(start + 1, nums, len, ga, gb + nums[start], countA, countB + 1);
}

