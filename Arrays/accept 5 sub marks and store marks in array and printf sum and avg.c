#include<stdio.h>
#include<conio.h>
void main(){
	int arr[100],n=5,cnt,sum;
	float average;
	for(cnt=0;cnt<n;cnt++){
	printf("ENTER 5 SUBJECTS MARKS: ");
	scanf("%d",&arr[cnt]);}
	for(cnt=0;cnt<n;cnt++){
	printf("%d,",arr[cnt]);}
	sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
	average=sum/5;
	printf("\nSUM=%d",sum);
	printf("\nAVERAGE=%.2f",average);
	getch();
}
