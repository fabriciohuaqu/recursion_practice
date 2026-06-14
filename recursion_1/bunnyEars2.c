/*We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies (1, 3, ..) have the normal 2 ears.
 The even bunnies (2, 4, ..) we'll say have 3 ears, because they each have a raised foot.i
 Recursively return the number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).*/
int bunnyEars2(int bunnies){
	if(!bunnies)
		return 0;
	return ((bunnies % 2 == 0) ? 3 : 2) + bunnyEars2(bunnies - 1);
}
