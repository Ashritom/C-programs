#include<stdio.h>
#include<conio.h>
int main(){
int tem;
printf("Enter temperature of water: ");
scanf("%d",&tem);
if(tem<=0)
printf("Water is in solid state i.e ICE");
else if(tem>=101)
printf("Water is in gas state i.e STEAM");
else if (tem==100)
printf("Watr is in the process to become steam i.e BOILING");
else 
printf("Water is in iquid state");
getch();
}
