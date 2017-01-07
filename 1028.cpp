#include<stdio.h>
int main(){
  typedef struct {
    int year;
    int month;
    int day;
    char name[6];
  }date;
  date max;
  date min;
  int n;
  scanf("%d",&n);
  date b;
  int t=0;
  while(n--){
    scanf("%s %d/%d/%d",&b.name,&b.year,&b.month,&b.day);
    if( (b.year*500+b.month*40+b.day<=2014*500+9*40+6) &&(b.year*500+b.month*40+b.day>=1814*500+9*40+6) ){
      if (t==0){
        min=b;
        max=b;
      }
      t+=1;
      if (b.year*500+b.month*40+b.day>min.year*500+min.month*40+min.day){
        min=b;
      }
      if (b.year*500+b.month*40+b.day<max.year*500+max.month*40+max.day){
        max=b;
      }
    }  
  }
  if (t)printf("%d %s %s",t,max.name,min.name);
  else printf("%d",t);
}
