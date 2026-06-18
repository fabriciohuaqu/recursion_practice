/*Given an array of ints, is it possible to choose a group of some of the ints, 
beginning at the start index, such that the group sums to the given target? However, 
with the additional constraint that all 6's must be chosen. (No loops needed.)*/

int groupSum6(int start, int nums[], int target, int len){
	if(target < 0)
		return 0;
	if(start == len)
		return (target == 0);
	if( nums [start] == 6)
		return groupSum6(start + 1, nums, target - 6 , len);
	return groupSum6(start + 1, nums, target - nums[start], len) || 
		groupSum6(start + 1, nums, target, len);
}
