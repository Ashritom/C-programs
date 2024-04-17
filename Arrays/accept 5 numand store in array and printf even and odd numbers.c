
#include<stdio.h>
#include<conio.h>
void main(){
int arr[5],n,cnt,even;
printf("ENTER N: ");
scanf("%d",&n);
for(cnt=0;cnt<n;cnt++){
printf("ENTER numbers: ");
scanf("%d",&arr[cnt]);}
for(cnt=0;cnt<n;cnt++)
if(even==(arr[cnt]%2==0)){
printf("%d is even\n",even);}
else if(arr[cnt]%2==!0)
printf("%d is odd\n",arr[cnt]);
printf("SUM OF EVEN NUMBERS: %d\n");
printf("SUM OF odd NUMBERS: %d\n",arr[cnt]);
}

