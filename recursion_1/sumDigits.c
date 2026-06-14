/*Given a non-negative int n, return the sum of its digits recursively (no loops). */
int sumDigits(int n){
	if(n < 10)
		return n;
	return n % 10 + sumDigits(n / 10);

}
