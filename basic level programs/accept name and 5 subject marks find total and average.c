#include<stdio.h>
#include<conio.h>
int main(){
char name[90];
int s1,s2,s3,s4,s5;
int total;
float average;
printf("Enter your name: ");
scanf("%s",&name);
printf("Enter 5 subject marks\n");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
printf("s1:%d\n",s1);
printf("s2:%d\n",s2);
printf("s3:%d\n",s3);
printf("s4:%d\n",s4);
printf("s5:%d\n",s5);
printf("*******************************\n");
printf("Name:%s\n",name);
printf("s1:%d\n",s1);
printf("s2:%d\n",s2);
printf("s3:%d\n",s3);
printf("s4:%d\n",s4);
printf("s5:%d\n",s5);
printf("Total:%d\n",s1+s2+s3+s4+s5);
total=s1+s2+s3+s4+s5;
average=total/5;
printf("Average: %.2f",average);
printf("\n*********************************");
return 0;
}
