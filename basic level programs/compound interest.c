#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int p,t;
	float r,a;
	printf("ENTER PRINCIPAL AMOUNT: ");/*x*/
	scanf("%d",&p);
	printf("ENTER TIME PERIOD: ");/*n*/
	scanf("%d",&t);
	printf("ENTER RATE OF INTEREST: ");/*r*/
	scanf("%f",&r);
	a=(1+r/100);
	printf("COUMPOUND INTEREST: %.2f",p*pow(a,t)-p);
	getch();
	}                                      

