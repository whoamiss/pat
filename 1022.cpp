#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	long long a,b,c;
	int arr[100],d,i,k=0;
	scanf("%lld %lld %d",&a,&b,&d);
	c=a+b;
	while (c){
		arr[k]=c%d;
		c/=d;
		k++;
	}
	for(i=k-1;i>=0;i--){
		printf("%d",arr[i]);
	}
	if (!(a+b)){
		printf("%d",0);
	}
}
