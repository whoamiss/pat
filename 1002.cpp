#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
  int i,sum=0,p=0;
  char k[100];
  int a[10];
   char pinyin[][9]= { "ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  scanf("%s",k);
    for(i=0;i<strlen(k);i++){
      sum+=k[i]-48;
  }
  while (sum>0){
    p+=1;
    a[p]=sum%10;
    sum=sum/10;
  }
  printf("%s",pinyin[a[p]]);
  for (i=p-1;i>0;i--){
    printf(" %s",pinyin[a[i]]);
  }
  return 0;
}
