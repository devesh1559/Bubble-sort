#include<stdio.h>
#define max 3
int arr[max];
void swap(int*x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int bubble_sort(int arr[max])
{
int i,j;  
 for(i=0;i<max-1;i++)
{
		for(j=0;j<max-i-1;i++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
				printf("Swap success");
			}
		}
}
}
void printArray(int arr[]) 
{ 
    int i; 
    for (i=0; i < max; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
main()
{
	printf("Eneter elements");
int i;
for(i=0;i<max;i++)
{
	scanf("%d",&arr[max]);
 } 
    bubble_sort(arr); 
    printf("Sorted array: \n"); 
    printArray(arr); 
}
