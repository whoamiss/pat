#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int main1(char a[])
{
	char m[12]="10X98765432";
	int k[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int i,temp=0;
	int t=0;
	for (i=0;i<17;i++){
		t+=(a[i]-48)*k[i];
		if (a[i]>57 || a[i]<48){
			printf("%s\n",a);
			return 1;
		}
	}
	if (a[17]!=m[t%11]){
		printf("%s\n",a);
		temp++;
	}
	return temp;
}
int main(){
	int k;
	int i,j,temp=0;
	char b[18];
	scanf("%d",&k);
	for(j=0;j<k;j++){
		scanf("%s",b);
		temp+=main1(b);
	}
	if (!temp)printf("%s","All passed");
}
