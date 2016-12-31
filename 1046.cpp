#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	int k,a,a1,b,b1,k1=0,k2=0;
	scanf("%d",&k);;
	for (k;k>0;k--){
		scanf("%d %d %d %d",&a,&a1,&b,&b1);
		if (a+b==a1 &a+b!=b1)k2++;
		if (a+b==b1 &a+b!=a1)k1++;

	}
	printf("%d %d",k1,k2);
}
