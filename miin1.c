#include <stdio.h>

// Function to find the missing number
int getMissingNo(int a[], int n)
{
	int i, total;
	total = (n + 1) * (n + 2) / 2;
	printf("%d\n", total);
	for (i = 0; i < n; i++)
		total -= a[i];
		
	return total;
}

// Driver code
void main()
{
	int arr[] = { 1, 2, 4 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int miss = getMissingNo(arr, N);
	printf("%d", miss);
}
