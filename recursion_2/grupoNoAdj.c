/*Given an array of ints, is it possible to choose a group of some of the ints, 
such that the group sums to the given target with this additional constraint: 
If a value in the array is chosen to be in the group,
 the value immediately following it in the array must not be chosen. (No loops needed.)
*/
	
int sumNoAdj(int start, int nums[], int target, int len){
	if(target == 0)
		return 1;
	if(target < 0)
		return 0;
	if(start >= len)
		return 0;
	return sumNoAdj(start + 2, nums, target - nums[start], len) ||
		sumNoAdj(start + 1, nums, target, len);
	
}	
