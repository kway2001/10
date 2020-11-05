#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 10;
	char c = 69;
	float f = 12.3;
	
	printf("i : %i %p \n", i, &i);
	printf("c : %c %p \n", c, &c);
	printf("f : %f %p \n", f, &f);
	
	return 0;
}
