//Quetion: What is output of this code?

#include <stdio.h>

int main() {
	
	
	int i = 0;
	int j = i * ++i;
	int k = j++ + ++i;
	i = j + k;
	k = i + j;
	
	printf("\n%d\n",i);
	printf("%d\n",j);
	printf("%d\n",k);

	
	

	return 0;
}
