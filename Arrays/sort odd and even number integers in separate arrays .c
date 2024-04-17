#include<stdio.h>
#include<conio.h>
int main(){
	int arr1[10],arr2[20],arr3[10];
	int i,j=0,k=0,n;
	printf("Seperate odd and even integers in separate arrays: \n");
	printf("__________________________________________________________\n");
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d",&n);
	printf("Input %d elements in the array: \n",n);
	for(i=0;i<n;i++)
	{
		printf("element-[%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr1[i]%2==0)
		{
	arr2[j]=arr1[i];
	j++;
	    }
else 
    arr3[k]=arr1[i];
    k++;
	}
	
	printf("The Even numbers: \n");
	for(i=0;i<j;i++)
	{
	printf("%d ",arr2[i]);	
	}
	printf("\n\n");
    printf("The Odd numbers: \n");
	for(i=0;i<k;i++)
	{
	printf("%d ",arr3[i]);	
	}
getch();
}
