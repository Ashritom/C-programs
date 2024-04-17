#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char name[90],revname[90];
	printf("ENTER NAME: ");
	gets(name);
	printf("THE STRING IN REVERSE: %s\n",strrev(name));
	strcpy(revname,name);
	strrev(revname);
	if(strcmp(name,revname)==0)
	printf("PALINDROME");
	else
	printf("NOT A PALINDROME");
	getch();
	}
