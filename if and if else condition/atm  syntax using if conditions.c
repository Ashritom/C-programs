#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main(){
int pin=9999,upin;
double balance=34500,ubalance;
	printf("Enter your pin: ");
	scanf("%d",&upin);
if(upin==pin){
	printf("WELCOME !!\n");
Sleep (3000);
	printf("Enter the required amount: ");
	scanf("%lf",&ubalance);
if(ubalance<=balance){
	printf("Please wait,the transaction is processing\n");
Sleep(10000);
	printf("Collect your money\n");
	printf("please remove your card\n");
	printf("Thank you for banking with us\n");
}else
		printf("Insufficient balance\n");
		printf("Available Balance : %.2lf",balance-ubalance);
}else
        printf("Invalid pin,please try again");
getch();
}
		

