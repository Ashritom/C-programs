/*what is a palindrome?
answer: A word,phrase,sequence that reads
the same abackwards as forward.
For eg:
madam,mom,2002,2112,radar,racecar,refer etc,*/

#include<stdio.h>
#include<conio.h>
int main(){
	int num,r,sum=0,temp;
	printf("Enter number: ");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		r=num%10;
		sum=(sum*10)+r;
		num=num/10;}
		if(temp==sum)
		printf("PALINDROME");
        else
        printf("NOT PALINDROME");
	getch();
}
