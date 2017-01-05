#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	int i,j,n,temp,a[100005];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=n;i>0;i--){
		temp=0;
		for (j=0;j<n;j++){
			if (a[j]>i)temp++;
		}
		if (temp>=i){
			printf("%d",i);
			return 0;
		}
	printf("%d",0);
	}
}
