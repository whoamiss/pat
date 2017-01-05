#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int k=200,w=6;//k为要求根号的，w为精确性 
	double i=0;
	double t=1;
	while(w--){
		t/=10;
		while((i+t)*(i+t)<k){
			i+=t;
		}
		printf("%lf\n",i);
	}
	return 0;
}
