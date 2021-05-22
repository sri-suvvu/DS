#include<stdio.h>
void linear_search(int val,int n,int arr[*]);
void main()
{
	int val,i,n;
	printf("enter the size of an array");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	printf("enter the value to search:");
	 scanf("%d",&val);
	linear_search(val,n,arr);
}
void linear_search(int val,int n,int arr[n])
{
	int i,found=0,pos=-1;
	for(i=0;i<n;i++)
	{
		if(arr[i]==val)
		{
			found=1;
			pos=i;
			printf("\n %d is found in array at position %d",val,i+1);
			break;//without break
		}
	}
	if(found==0)
	printf("\n %d does not found in the array",val);
}
