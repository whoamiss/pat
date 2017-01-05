#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	double a[1005],j1;
	int k,i,i1,j,t=0;
	for (i=0;i<=1000;i++){
		a[i]=0;
	}
	for(i1=0;i1<2;i1++){
		scanf("%d",&k);
		for (i=0;i<k;i++){
			scanf("%d %lf",&j,&j1);
			a[j]+=j1;
		}
	}
	for (i=0;i<=1000;i++){
		if(a[i])t++;
	}
	if(t)printf("%d ",t);
	if(!t)printf("%d",t);
	int u=0;
	for (i=1000;i>=0;i--){
		if(a[i]){
			if (u)printf("%c",' ');
			printf("%d %.1lf",i,a[i]);
			u++;
		}
	}
	return 0;
}


