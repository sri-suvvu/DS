#include<stdio.h>
void main()
{
	int n,temp,i,j,arr[50];
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	//bubble sort logic
	for(i=0;i<n;i++)
	  for(j=0;j<n-i-1;j++)
	  {
	  	if(arr[j]>arr[j+1])
	  	{
	  		temp=arr[j];
	  		arr[j]=arr[j+1];
	  		arr[j+1]=temp;
		}
	  }
	  printf("\nAfter sorting the elements of an array is:\n");
	for(j=0;j<n;j++)
	 printf("%d\t",arr[j]);
}
