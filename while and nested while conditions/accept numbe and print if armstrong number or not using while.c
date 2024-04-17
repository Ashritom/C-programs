/*what is an armstrong number?
answer: An armstrong number 
is the one whose sum of the digits
raised to the power of the number
of digits in the number equals to 
the number itself.
For eg: 
153 => 1^3+5^3+3^3=1+125+27 = 153
9474 => 9^4+4^4+7^4+4^4=6561+256+2401+256 = 9474*/

#include<stdio.h>
#include<conio.h>
int main(){
	int num,temp=0,rem,sum=0;
	printf("Enter Number: ");
	scanf("%d",&num);
	temp=num;
	while(num!=0){
	rem=num%10;
	sum=sum+(rem*rem*rem);
	num=num/10;}
	if(temp==sum)
	printf("Armstrong Number",temp);
	else
	printf("Not Armstrong Number",temp);
getch();
}
