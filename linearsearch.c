#include<stdio.h>


int main(){
	
	int a[20],i,x,n;
	printf("How many elements:");
	scanf("%d",&n);
	
	printf("Enter array element:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the element to search:\n");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	{
		if(x==a[i])
	{
		   printf("Element found at index %d",i);
		   	    
		   	}
		   	
	}
	
	
return -1;	    
}

