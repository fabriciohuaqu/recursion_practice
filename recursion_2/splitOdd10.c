/*Given an array of ints, is it possible to divide the ints into two groups, 
so that the sum of one group is a multiple of 10, and the sum of the other group is odd. 
Every int must be in one group or the other. 
Write a recursive helper method that takes whatever arguments you like, 
and make the initial call to your recursive helper from splitOdd10(). (No loops needed.)
*/

int splitOdd10(int nums[], int len){
	return (splitOdd10Support(0 , nums, len, 0, 0));
}
int splitOdd10Support(int start, int nums[], int len, int group10, int groupOdd){
	if(start >= len)
		return((group10 % 10 == 0) && !(groupOdd % 2 == 0));
	return splitOdd10Support(start + 1, nums, len, group10 + nums[start], groupOdd) || 
		splitOdd10Support(start + 1, nums, len, group10, groupOdd + nums[start]);
}
