#include <stdio.h>

int my_getchar4(){
	int c;
	
	if ((c = getchar() == EOF)
	{
		if(ferror(stdin)){
			perror("Error indicator is set");
			exit(1);
		}
		if(feof(stdin)){
			perror("EOF indicator is set");
			exit(3);
		}
		
		perror("arcerts zemot gan error");
		exit(2);
	}
	
	return 0;
}
