#include <stdio.h>

int my_getchar4();

int main() {
	int c;
	
	while ((c = my_getchar4()) != EOF) {
		if (c == '\n' || c == '\t') {
			putchar('\n');
			while((c = my_getchar4() == '\n' || c == '\t') {
				
			}
		}
	}
	
	putchar(c);
}
