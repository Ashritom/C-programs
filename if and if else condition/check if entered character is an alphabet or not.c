#include<stdio.h>
#include<conio.h>
int main(){
char alphabet;
printf("Enter character: ");
scanf("%c",&alphabet);
if(alphabet>='a'&&alphabet<='z'){
printf("Entered character is an alphabet");}
else if(alphabet>='A'&&alphabet<='Z')
printf("Entered character is an alphabet");
else
printf("Entered character is not an alphabet");
getch();
}
