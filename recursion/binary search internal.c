#include<stdio.h>
int Binary_search( int a[], int low, int high, int x);
int Binary_search_rec( int a[], int low, int high, int x);
int main(){
	int a[20],low,high,x,xloc=-1,i,n,ch;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the element you want to search: ");
	scanf("%d",&x);
	low=0;
	high=n-1;
	printf("Which function do you want to use: \n");
	printf("1.Non recursive function\n2.Recursive function");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			xloc=Binary_search(a,low,high,x);
			if(xloc!=-1)
			printf("%d is found at %d location by non recursive function",x,xloc+1);
			else
			printf("%d not found in the list",x);
			break;
			
		case 2:
			xloc=Binary_search_rec(a,low,high,x);
			if(xloc!=-1)
			printf("%d is found at %d location by recursive function",x,xloc+1);
			else
			printf("%d not found in the list",x);
			break;
			
		default: printf("Invalid choice");
		
	}
	return 0;
}


int Binary_search(int a[], int low, int high, int x){
	int mid;
	while(low<=high){
		mid=(high+low)/2;
		if(a[mid]==x)
		return mid;
		else if(a[mid]>x)
		high=mid-1;
		else
		low=mid+1;
	}
	return -1;
}


int Binary_search_rec(int a[], int low, int high, int x){
	int mid;
	if(high<low)
	return -1;
	mid=low+(high-low)/2;
	if(a[mid]>x)
	return Binary_search_rec(a,low,mid-1,x);
	else if(a[mid]<x)
	return Binary_search_rec(a,mid+1,high,x);
	else
	return mid;
}

