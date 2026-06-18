/*Given a string, compute recursively (no loops) the number of times lowercase "hi" appears in the string.*/
int countHi(char s[]){
	if(!s[0] || !s[1])
		return 0;
	if(s[0] == 'h' && s[1] == 'i')
		return 1 + countHi(s + 2);
	return countHi(s + 1);
}

