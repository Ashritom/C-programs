#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char str1[90],str2[90],temp[90];
	printf("ENTER 1ST STRING: ");
	gets(str1);
	printf("ENTER 2ND STRING: ");
	gets(str2);
	strcpy(temp,str1);
	strcpy(str1,str2);
	strcpy(str2,temp);
	printf("AFTER SWAPPING(the 1ST string is):%s\n",str1);
	printf("AFTER SWAPPING(the 2nd string is):%s",str2);
	getch();
	
}
