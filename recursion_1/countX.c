/*Given a string, compute recursively (no loops) the number of lowercase 'x' chars in the string.*/
int counX(char s[]){
	if(!s[0])
		return 0;
	return (s[0] == 'x') + counX(s + 1);
}
