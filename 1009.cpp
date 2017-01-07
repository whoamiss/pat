#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100][100];
    gets(a);
    int t=0,i=0,j=0,k=strlen(a);
	for (i=0;i<k;i++){
		if(a[i]==' '){
			t++;
			j=0;
		}
		else b[t][j++]=a[i];
	}
    for (i=t;i>0;i--){
    	printf("%s ",b[i]);
	}
	printf("%s",b[i]);
} 
