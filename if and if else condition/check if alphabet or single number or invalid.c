#include<stdio.h>
#include<conio.h>
int main(){
char character;
printf("Enter character: ");
scanf("%c",&character);
if(character>='a'&&character<='z'){
printf("Entered character is an alphabet");}
else if(character>='A'&&character<='Z')
printf("Entered character is an alphabet");
else if(character>='0'&&character<='9')
printf("Entered character is a Number");
else
printf("Entered character is neither an alphabet nor a one digit number");
getch();
}
