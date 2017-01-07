#include<stdio.h>
int main(){
    int a,a1,b,b1,c,c1,k;
    scanf("%d.%d.%d",&a,&b,&c);
    scanf("%d.%d.%d",&a1,&b1,&c1);
    k=a1*17*29+b1*29+c1-(a*17*29+b*29+c);
    if (k<0){
    	printf("%c",'-');
    	k=-k;
	}
	a=k/493;
	k%=493;
	b=k/29;
	k%=29;
    printf("%d.%d.%d",a,b,k);
} 

