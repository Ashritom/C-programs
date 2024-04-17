#include<stdio.h>
#include<conio.h>
int main(){
	char name[90];
	int s1,s2,s3,s4,s5,total;
	float average;
	printf("Enter name: ");
	gets(name);
	printf("Enter 5 subjects marks");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	printf("s1: %d\n",s1);
	printf("s2: %d\n",s2);
	printf("s3: %d\n",s3);
	printf("s4: %d\n",s4);
	printf("s5: %d\n",s5);
total=s1+s2+s3+s4+s5;
printf("Total: %d\n",total);
average= (float)total/5;
printf("Average: %.2f",average);
	getch();
}
