#include <stdio.h> 
#include<conio.h>
int main(){
int input;
int days;
int years;
int weeks;
printf("Enter number of days: ");
scanf("%d",&input);

years = input/365; 
weeks = (input % 365)/7;
days = input- ((years*365) + (weeks*7));

printf("Years: %d\n", years);
printf("Weeks: %d\n", weeks);
printf("Days: %d \n", days);

getch();
}
