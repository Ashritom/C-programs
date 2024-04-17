#include<stdio.h>
#include<conio.h>
int main(){
int month,year;
printf("Enter Month Number[1-12]: ");
scanf("%d",&month);
if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
printf("31 Days");
else if(month==4||month==6||month==9||month==11)
printf("30 Days");
else if(month==2){
printf("Enter year: ");
scanf("%d",&year);
if((year%4==0&&year%100!=0)||year%400==0)
printf("29 Days");
else
printf("28 Days");
}
else printf("Invalid Month Number");
getch();
}
