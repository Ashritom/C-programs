#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,t1=0,t2=1,nextTerm=t1+t2;
	printf("ENTER THE VALUE OF NUMBER OF SERIES: ");
	scanf("%d",&n);
	printf("Fibanocci Series: %d,%d,",t1,t2);
	for(i=3;i<=n;i++){
	printf("%d,",nextTerm);
	t1=t2;
	t2=nextTerm;
	nextTerm=t1+t2;
		}
getch();
}
