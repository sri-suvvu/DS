#include<stdio.h>
int smallest(int arr[],int k,int n);
void selection(int arr[],int n);
void main()
{
	int arr[20],i,n;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	selection(arr,n);
}
void selection(int arr[],int n)
{
	int k,pos,temp;
	for(k=0;k<n;k++)
	{
		pos=smallest(arr,k,n);
		temp=arr[k];
		arr[k]=arr[pos];
		arr[pos]=temp;
	}
	printf("\n After sorting the elements of an array are:");
	for(k=0;k<n;k++)
	printf("%d\t",arr[k]);
}
int smallest(int arr[],int k,int n)
{
	int pos=k,small=arr[k],i;
	for(i=k+1;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			pos=i;
		}
	}
return pos;
}
