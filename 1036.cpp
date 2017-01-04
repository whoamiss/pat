#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i=0,j,j1;
	char c;
	scanf("%d %c",&i,&c);
	for (j=0;j<i;j++){
		printf("%c",c);
	}
	printf("%c",'\n');
	for (j=0;j<i/2+(i-i/2-i/2)-2;j++){
		for (j1=0;j1<i;j1++){
			if (j1==0 || j1==i-1)
				printf("%c",c);
			else  
				printf("%c",' ');
		} 
		printf("%c",'\n');
	}
	for (j=0;j<i;j++){
		printf("%c",c);
	}
}
