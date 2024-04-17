#include<stdio.h>
#include<conio.h>
void main(){
	char word[100];
	int cnt,caps;
	printf("ENTER WORD: ");
	gets(word);
	printf("UPPER CASE: ");
	for(cnt=0;word[cnt]!='\0';cnt++)
	if(caps=word[cnt]-32)
	printf("%c",caps);
}
/*ASCII value:
	a=97
	A=65
	difference=32*/

