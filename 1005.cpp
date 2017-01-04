#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int a[110];
int k;
int ca(int i){
	int j;
	while (i>1){
		if (i%2==1)i=(3*i+1)/2;
		else i/=2;
		//printf("%d ",i);
		for (j=0;j<k;j++){
			if (i==a[j])a[j]=0;
		}
	}
	//printf("%c",'\n');
}

int main(void)
{
	scanf("%d",&k);
	int t=0;
	for (t=0;t<k;t++){
		scanf("%d",&a[t]);
	}
	int size,j,j1,i=3;
	for (j=0;j<k;j++){
		ca(a[j]);
	}

	int temp;
	
	for (j=1;j<k;j++){
		temp=a[j];
		for (j1=j;j1>=1 && a[j1-1]<temp;j1--){
			a[j1]=a[j1-1];
		}
		a[j1]=temp;
	}
	int a1=0;
	for (j=0;j<k;j++){
		if (a[j]!=0){
			if (a1==0){
				printf("%d",a[j]);
			}else{
				printf(" %d",a[j]);
			}
			a1++;
		}
	}
	return 0;
}
