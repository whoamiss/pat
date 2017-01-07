#include<stdio.h>
#include <string.h>
int strint(int i){
	int k=1;
	while (i/=10){
		k++;
	}
	int j;
	for(j=0;j<6-k;j++){
		printf("%d",0);
	}
}
int main(){
    int n,c;
    scanf("%d %d",&n,&c);
    typedef struct{
    	int id;
    	char name[8];
    	int grade;
	}node;
	node a[n+2];
	int i,j;
	for (i=0;i<n;i++){
		scanf("%d %s %d",&a[i].id,&a[i].name,&a[i].grade);
	}
	node temp;
	if (c==1){
		for (i=1;i<n;i++){
			for (j=0;j<n-i;j++){
				if (a[j].id>a[j+1].id){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	}
	if (c==2){
		for (i=1;i<n;i++){
			for (j=0;j<n-i;j++){
				if (strcmp(a[j].name,a[j+1].name)>0){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				if (strcmp(a[j].name,a[j+1].name)==0 && a[j].id>a[j+1].id){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	}
	if (c==3){
		for (i=1;i<n;i++){
			for (j=0;j<n-i;j++){
				if (a[j].grade>a[j+1].grade ||(a[j].grade==a[j+1].grade && a[j].id>a[j+1].id)){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	}
	for (i=0;i<n;i++){
		strint(a[i].id);
		printf("%d %s %d\n",a[i].id,a[i].name,a[i].grade);
	}
}
