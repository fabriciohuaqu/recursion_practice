/*Given a non-negative int n, return the count of the occurrences of 7 as a digit, 
so for example 717 yields 2. (no loops). */
int count7(int n){
	if(n < 10)
		return (n == 7);
	return (n % 10 == 7) + count7(n / 10);
}
