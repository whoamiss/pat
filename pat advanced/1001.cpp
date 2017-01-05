#include<stdio.h>
int main(){
	int k=0,i,a,b,c;
	//scanf("%d %d",&a,&b);
	//c=a+b;
	c=445;
	if (c<0){
		printf("%c",'-');
		c=-c;
	}
	if (!c)printf("%d",0);
	int c1=c,arr[10];
	while(c1){
		arr[k]=c1%10;
		c1/=10;
		k++;
	}
	for(i=k-1;i>=0;i--){
		if((k-i-1)%3==k%3 &&k-i-1!=0)printf("%c",',');
		printf("%d",arr[i]);
	}
	return 0;
} 

