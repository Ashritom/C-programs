#include<stdio.h>
#include<conio.h>
int main(){
char name[90]="Albert Einstein";
int age=14;
char month[90]="March";
int year=1879;
char country[90]="Germany";
char theory[90]="Theory of relativity";
printf("%s was born on %d %s %d, %s. He was well known for developing %s.",name,age,month,year,country,theory);
getch();
}
