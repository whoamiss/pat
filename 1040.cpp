#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char a[100001];
	int i,j,k,k1=0,k2=0,sum=0;
	scanf("%s",a);
	for (i=0;i<strlen(a);i++){
		if (a[i]=='T')k2++;
	}
	for (i=0;i<strlen(a);i++){
		if (a[i]=='P')k1++;
		if (a[i]=='T')k2--;
		if (a[i]=='A'){
			sum=(sum+k1*k2)%1000000007;
		}
	}
	printf("%d",sum);
	return 0;
}

