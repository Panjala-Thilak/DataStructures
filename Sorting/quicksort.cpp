#include<stdio.h>
void quicksort(int a[],int first,int last)
{
	int pivot,i,j,temp;
	if(first<last)
	{
		i=first;
		j=last;
		pivot=first;
	}
	while(i<j)
	{
	while(a[i]<=a[pivot])
	i++;
	while(a[j]>a[pivot])
	j--;
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	temp=a[pivot];
	a[pivot]=a[j];
	a[j]=temp;
	quicksort(a,first,j-1);
	quicksort(a,j+1,last);
}	
}
int main()
{
	int n,i;
	printf("Enter the no of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the elememnts into the array ");
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	printf("Elements in the array after sorting ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
