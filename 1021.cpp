#include<stdio.h>
int main(){
	char i[1010];
	int a[10]={0};
	int j;
    scanf("%s",&i);
    int t=0;
    while(i[t]){
    	a[i[t]-48]++;
    	t++;
	}
	for (j=0;j<10;j++){
		if(a[j])printf("%d:%d\n",j,a[j]);
	}
} 
