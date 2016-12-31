#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i,i1,j,j1,t[110],temp,a[110],b[110];
	scanf("%d %d",&j1,&j);
	for (i=0;i<j;i++){
		scanf("%d",&a[i]);
	};
	for (i=0;i<j;i++){
		scanf("%d",&b[i]);
	};
	for (i1=0;i1<j1;i1++){
		t[i1]=0;
		for (i=0;i<j;i++){
			scanf("%d",&temp);
			if (temp==b[i]){
				t[i1]+=a[i];	
			}
		};
	}
	for (i=0;i<i1;i++){
		printf("%d",t[i]);
	}	
}
