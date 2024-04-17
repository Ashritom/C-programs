#include<stdio.h>
#include<conio.h>
int Binary_Search(int a[], int low, int high, int x);
int Binary_Search_rec(int a[], int low, int high, int x);
clrscr();

void main(){
	int a[20], low, high, x, xloc=-1,i,n,ch;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter any %d elements:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the elements that you want to search:");
	scanf("%d",&x);
	
	low=0;
	high=n-1;
	
	printf("Which function do you want to use\n");
	printf("1.Non Recursive\n 2.Recursive\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			xloc=Binary_Search(a,low,high,x);
			if(xloc!=-1)
			printf("%d is found at %d location by non recursive function",x,xloc+1);
			else
			printf("%d is not found in the list",x);
			break;
		case 2:
			xloc=Binary_Search_rec(a,low,high,x);
			if(xloc!=-1)
			printf("%d is found at %d location by recursive function",x,xloc+1);
			else
			printf("%d is not found in the list",x);
			break;
		default : printf("Invalid Choice");
	}
	getch();
}

int Binary_Search(int a[], int low, int high, int x){
	int mid;
	while(low<=high){
		mid= (low+high)/2;
		if(x==a[mid])
		return mid;
		else if(x<a[mid])
		high=mid-1;
		else 
		low=mid+1;
	}
	return -1;
}


int Binary_Search_rec(int a[], int low, int high, int x){
	int mid;
	if(high<low)
	return -1;
	mid= low+((high-low)/2);
	if(x<a[mid])
	return  Binary_Search_rec(a,low,mid-1,x);
	else if (x>a[mid])
	 Binary_Search_rec(a,mid+1,high,x);
	 else
	 return mid;
}

