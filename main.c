#include <stdio.h>
int main(){
	#ifdef DEBUG
		printf("Hello World in debug mode\n");
	#else
 		printf("Hello World in production mode\n");

	#endif
	
	return 0;
}