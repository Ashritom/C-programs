#include<stdio.h>
#include<conio.h>
void main(){
int arr[5],n,cnt;
printf("ENTER N: ");
scanf("%d",&n);
for(cnt=0;cnt<n;cnt++){
printf("ENTER numbers: ");
scanf("%d",&arr[cnt]);}
for(cnt=0;cnt<n;cnt++)
if(arr[cnt]%2==0)
printf("%d is even\n",arr[cnt]);
}

