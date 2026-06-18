/*Given an array of ints, is it possible to divide the ints into two groups, 
so that the sum of the two groups is the same, with these constraints: 
all the values that are multiple of 5 must be in one group, 
and all the values that are a multiple of 3 (and not a multiple of 5) must be in the other.*/
int split53(int nums[], int len){
	return(split53Support(0, nums, len, 0, 0));
}
int split53Support(int start, int nums[], int len, int G5, int G3){
	if(start >= len)
		return(G5 == G3);
	if(nums[start] % 5 == 0)
		return split53Support(start + 1, nums, len, G5 + nums[start], G3);
	if(nums[start] % 3 == 0)
		return split53Support(start + 1, nums, len, G5, G3 + nums[start]);
	return split53Support(start + 1, nums, len, G5 + nums[start], G3) || 
		split53Support(start + 1, nums, len, G5, G3 + nums[start]);
}	
