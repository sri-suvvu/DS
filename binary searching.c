#include<stdio.h>
 int binarysearch(int val,int n,int arr[*]);
void main()
{
	int val,i,n,pos;
	printf("enter the size of an array");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	 printf("enter the value to search:");
	 scanf("%d",&val);
	 pos=binarysearch(n,arr,0,n-1,val);
	 if(pos!=0)
	 printf("element %d is found at %dth position",val,pos);
	 else
	 printf("\n %d is not found in the array",val);
	 
}
void binarysearch(int n,int arr[n],int beg,int end,int val)
{
	int mid,pos=-1;
	while(beg+end)
	{
	mid=(beg+end)/2;
	if(arr[mid]==val)
	{
		pos=mid+1;
		printf("\n element %d is found at %dth position",val,pos);
	}
	else if(arr[mid]>val)
	 end=mid-1;
	 else
	 beg=mid+1;
}
if(pos==-1)
     printf("\n%d does not found in the array",val);
}
