#include<stdio.h>
#include<string.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a=(b-a+50)/100;
    int h,m,s;
    h=a/3600;
    m=(a%=3600)/60;
    printf("%d %d %d\n",h,m,a%60);

} 
