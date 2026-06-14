/*Given n of 1 or more, return the factorial of n, which is n * (n-1) * (n-2) ... 1
. Compute the result recursively (without loops).*/
int facortial(int n){
	if(n == 0)
		return 1;
	return n * facortial(n - 1);
}
