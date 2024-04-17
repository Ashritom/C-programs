#include<stdio.h>
#include<conio.h>
int main(){
	char name[90],result[70];
	int s1,s2,s3,s4,s5,total;
	float avg;

	printf("Enter name: ");
	gets(name);
	
	printf("Enter 5 subjects marks: ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	printf("s1=%d\n",s1);
	printf("s2=%d\n",s2);
	printf("s3=%d\n",s3);
	printf("s4=%d\n",s4);
	printf("s5=%d\n",s5);
	
	if(s1>=40)
	printf("s1:pass\n");
else
printf("s1:fail\n");
if(s1>=40)
printf("s2:pass\n");
else
printf("s2:fail\n");
if(s3>=40)
printf("s3:pass\n");
else
printf("s3:fail\n");
if(s4>=40)
printf("s4:pass\n");
else
printf("s4:fail\n");
if(s5>=40)
printf("s5:pass\n");
else
printf("s5:fail\n");

	
	total=s1+s2+s3+s4+s5;
	avg=(float)total/5;

	printf("total: %d\n",total);
	printf("Percentage: %.2f\n",avg);

if(s1>=40&&s2>=40&&s3>=40&&s4>=40&&s5>=40)
printf("Result:Pass\n");
else
printf("Result:Fail\n");

if(avg>=90){
printf("Grade: A");
 if(avg>=60&&avg<90)
printf("Grade: B");
 if(avg<60&&avg>=35)
printf("Grade: C");
}else
printf("Grade: E");
getch();
}


