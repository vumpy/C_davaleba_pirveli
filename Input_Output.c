#include <stdio.h>

int my_getchar1();

int main() {
	int c;
		
	c = my_getchar1();
	
	while (c != EOF){
		putchar(c);
	}
	
	return 0;

}
