#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	int n,a[10],k=0,t[100],sum=0;
	int i=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (i!=j){
				t[k]=a[i]*10+a[j];
			k++;
			}
		}	
	}
	for (i=0;i<k;i++){
		sum+=t[i];
		//printf("%d ",t[i]);
	}
	printf("%d",sum);
	return 0;
}

