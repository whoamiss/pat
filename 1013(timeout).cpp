#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int f[10000];
int k=0;
int sushu(int i){
	int j;
	for (j=1;j<=k;j++){
		if (i%f[j]==0){
			return 0;
		}
	}
	return 1;
}
int main(void)
{
	int m,n,temp=0,temp1=0;;
	//scanf("%d %d",&m,&n);
	m=1;n=11111;
	int i=1;
	while (k<n){
		i++;
		if (sushu(i)){
			k++;
			f[k]=i;
			if (m<=k){
				temp++;
				if (temp%10==1 && temp!=1){
					printf("%c",'\n');
				}
				if (temp%10!=1){
					printf("%c",' ');
				}
				printf("%d",i);	
			}
		}
	}
	return 0;
}
