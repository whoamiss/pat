#include<stdio.h>
int main(){
    long long a,b;
    int a1,b1,a2,b2,t=0,k=1;
    scanf("%lld %d %lld %d",&a,&a1,&b,&b1);
	while (a){
    	if (a%10==a1){
    		t+=a1*k;
			k*=10;
		}
    	a/=10;
	}
	k=1;
	while (b){
    	if (b%10==b1){
    		t+=b1*k;
			k*=10;
		}
    	b/=10;
	}
    printf("%d",t);
} 
