#include<stdio.h>
#include<math.h>
#include<string.h>
int a[100][100]={0};
int o;//o is the number of queens 
void xuanran(int m,int n){//渲染同行同列同斜线 
	int i,j;
	for(i=0;i<o;i++){
		a[i][n]=1;
		a[m][i]=1;
	}
	for (i=0;i<o;i++){
    	for (j=0;j<o;j++){
    		if (abs(m-i)==abs(n-j)){
    			a[i][j]=1;
			}
		}
	}
}
int num(int i){
	int j;
	int k=0,k1=0;
	int i1,j1;
	int t[o][o];
	for (j=0;j<o;j++){
		if (a[i][j]==0){
			if(i==(o-1)){
				k++;
			}
			else{
				for (i1=0;i1<o;i1++){
    				for (j1=0;j1<o;j1++){
    				t[i1][j1]=a[i1][j1];
					}
				}
				//a[i][j]=1;
				xuanran(i,j);
				k+=num(i+1);
				for (i1=0;i1<o;i1++){
    				for (j1=0;j1<o;j1++){
    				a[i1][j1]=t[i1][j1];
					}
				}
				
				a[i][j]=0;
			}
		}
	}
	if(i==1)printf("%d ",k);
	return k;
}

int main(){
    int i,j;
    o=12;
    printf("%d\n",num(0));
}

