#include<stdio.h>
#include<conio.h>
int main(){
	int ch;
	printf("MENU:\n");
	printf("1.SONY TV\n");
	printf("2.SAMSUNG WASHING MACHINE\n");
    printf("3.HAVELLS AC\n");
    printf("4.REALME MOBLE\n");
    printf("5.EXIT\n");
    printf("ENTER YOUR CHOCE: ");
    scanf("%d",&ch);
    switch(ch){
    case 1:printf("SONY TV COST: 95,000");break;
    case 2:printf("SAMSUNG WASHING MACHINE COST: 50,500");break;
    case 3:printf("HAVELLS AC: 4,500");break;
    case 4:printf("REALME MOBILE COST: 10,000");break;
    case 5:printf("EXIT successful");break;
    default :printf("INVALID CHOICE");break;}
    getch();
}
