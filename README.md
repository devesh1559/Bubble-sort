# Bubble-sort
## AIM
 To perform bubble sort in an given array
## Theory 
Bubble Sort in C is a sorting algorithm where we repeatedly iterate through the array and swap adjacent elements that are unordered. We repeat this until the array is sorted.
As an example, for the array[5, 1, 4, 2, 3] we can see that 5 should not be on the left of 1 and so, we swap them to get: [1, 5, 4, 2, 3].
Next, we see that 5 should again not be on the left of 4. We swap 5 and 4 to get [1, 4, 5, 2, 3]. We repeat this for 5 and 2 and subsequently for 5 and 3 to get [1, 4, 2, 3, 5].
As can be seen - after one “pass” over the array, the largest element (5 in this case) has reached its correct position - extreme right. Let us try to repeat this process. (1, 4) is correct. However, (4, 2) is an incorrect order. Therefore, we swap 4 and 2 to get [1, 2, 4, 3, 5]. Now again, (4, 3) is incorrect so we do another swap and get [1, 2, 3, 4, 5]. As can be seen, the array is sorted! This exactly is how bubble sort in C works.
## Algorithm
int bubble_sort(int arr[])
int i,j;  
 for(i=0;i<max-1;i++), where max is maximum size of array.
{
		for(j=0;j<max-i-1;i++)
		{
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
				printf("Swap success")
## Conclusion
For each pass we shift laregest element to right most part. This continues for n iterations where n is no of element in an array.
