/*Given a non-negative int n, compute recursively (no loops) the count of the occurrences of 8 as a digit, 
except that an 8 with another 8 immediately to its left counts double, so 8818 yields 4. */
int count8(int n){
	if(n < 10)
		return (n == 8);
	if(n % 10 == 8 && (n / 10) % 10 == 8)
		return 2 + count8(n / 10);
	return (n % 10 == 8) + count8(n / 10);
}
