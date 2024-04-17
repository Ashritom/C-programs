#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a,b,c,discriminant,r1,r2,real,imag;
	printf("Enter A B C: ");
	scanf("%d%d%d",&a,&b,&c);
	discriminant=b*b-4*a*c;
	if(discriminant>0){
r1=(-b+sqrt(discriminant)/(2*a));
r2=(-b-sqrt(discriminant)/(2*a));
printf("Roots are: %.2f and %.2f",r1,r2);
}
	else if(discriminant==0){
r1=r2=-b/(2*a);
printf("Roots are: %.2f and %.2f",r1,r2);
}
	else{
real=-b/(2*a);
imag=sqrt(-discriminant)/(2*a);
printf("Roots are: %.2f+%.2f and %.2f-%.2f",real,imag,real,imag);
}
getch();
}
