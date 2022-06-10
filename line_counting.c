#include <stdio.h>

int my_getchar2();

int main(){
	int c, n1;
	
	n1 = 0;
	
	while ((c = my_getchar2()) != EOF)
		if(c == '\n')
			++n1;
	
	printf("%d\n", n1);

}
