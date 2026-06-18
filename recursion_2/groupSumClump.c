/*Given an array of ints, is it possible to choose a group of some of the ints, 
such that the group sums to the given target, with this additional constraint: 
if there are numbers in the array that are adjacent and the identical value, 
they must either all be chosen, or none of them chosen. 
For example, with the array {1, 2, 2, 2, 5, 2}, either all three 2's in the middle must be chosen or not, all as a group. 
(one loop can be used to find the extent of the identical values).*/

int groupSumClump(int start, int nums[], int target, int len) {
    if (target < 0)
        return 0;
    if (start >= len)
        return (target == 0);
    int i = start;
    int sumaGrupo = 0;
    while (i < len && nums[i] == nums[start]) {
        sumaGrupo += nums[i]; 
        i++;                 
    }
    return groupSumClump(i, nums, target - sumaGrupo, len) || 
           groupSumClump(i, nums, target, len);
}
