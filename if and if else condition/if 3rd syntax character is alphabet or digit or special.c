#include<stdio.h>
#include<conio.h>
int main(){
	char character;
	printf("Enter a character: ");
	scanf("%c",&character);
 	if(character>='a'&&character<='z')
	printf("Entered character is an alphabet");
	else if( character>='0'&&character<='9')
	printf("Entered character is a digit");
	else
	printf("Entered character is a special character");
	getch();
}

