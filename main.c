#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	printf("input minute");
	scanf("%i",&x);
	
	printf("the time is %d : %d",x/60,x%60);

	
	 
	return 0;
}
