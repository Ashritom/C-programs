#include<stdio.h>
#include<conio.h>
int main(){
char gender;
int age;
printf("Enter gender[m/f]: ");
scanf("%c",&gender);
printf("Enter Age: ");
scanf("%d",&age);

if(gender=='f'&&age>=18)
printf("Woman Eligible for job");
else if(gender=='m'&&age>=20)
printf("Man Eligible for job");
else
printf("Not Eligible for the job");
getch();
}
