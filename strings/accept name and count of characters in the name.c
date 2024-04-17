#include<stdio.h>
#include<conio.h>
void main(){
	char name[90];
	int cnt,count=0;
	printf("ENTER NAME: ");
	gets(name);
	printf("NUMBES OF CHARACTERS:");
	for(cnt=0;name[cnt]!='\0';cnt++)
	count=cnt+1;
    printf("%d",count);
}
