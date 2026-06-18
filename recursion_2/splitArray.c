/*
Given an array of ints, is it possible to divide the ints into two groups, 
so that the sums of the two groups are the same. 
Every int must be in one group or the other. 
Write a recursive helper method that takes whatever arguments you like, 
and make the initial call to your recursive helper from splitArray(). (No loops needed.)
*/
int splitArray(int nums[], int len){
	return (splitArraySupport(0, nums, len, 0, 0));
}
int splitArraySupport(int start, int nums[], int len, int group1, int group2){
	if(start >= len)
		return (group1 == group2);
	return splitArraySupport(start + 1, nums, len, group1 + nums[start], group2) || 
		splitArraySupport(start + 1, nums, len, group1, group2 + nums[start]);
}
