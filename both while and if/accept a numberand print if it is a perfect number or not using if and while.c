/*what is a perfect number?
answer:It is the sum of its positive divisor 
excluding the number itself.
for eg: 6
divisor of 6 excluding itself:1,2,3
therefore,1+2+3=6

28 : 1,2,4,7,14
therefore,1+2+4+7+14=28*/



#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,sum=0;
	printf("Enter number: ");
	scanf("%d",&n);
	i=1;
	while(i<n){
		if(n%i==0)
		sum=sum+i;
		i++;}
		if(sum==n)
		printf("%d is a perfect number",n);
		else
		printf("%d is not a perfect number",n);
		getch();
}




