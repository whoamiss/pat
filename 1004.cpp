#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	struct student{
		char name[100];
		char num[100];
		int grade;
	}temp,max,min;
	int n;
	scanf("%d",&n);
	max.grade=0;
	min.grade=100;
	while(n--){
		scanf("%s %s %d",temp.name,temp.num,&temp.grade);
		if (temp.grade>max.grade){
			max=temp;
		}
		if (temp.grade<min.grade){
			min=temp;
		}
		//printf("%d %d",temp.name,temp.num);
	}
	printf("%s %s\n",max.name,max.num);
	printf("%s %s\n",min.name,min.num);
	return 0;
}

