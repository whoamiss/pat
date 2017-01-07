#include<stdio.h>
int main(){
    int i,n,k[20];
    long long a,b,c;
	scanf("%d",&n);
    for (i=1;i<=n;i++){
    	scanf("%lld %lld %lld",&a,&b,&c);
   		if (a+b>c)printf("%s%d%s","Case #",i,": true\n");
   		else printf("%s%d%s","Case #",i,": false\n");
	} 
} 

