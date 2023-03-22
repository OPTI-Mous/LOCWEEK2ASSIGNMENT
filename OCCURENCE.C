#include <stdio.h>

int main()
{
	int size, i, num, occr = 0;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int arr[size];
	
	printf("Enter the Array %d elements : ", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter the item to get the occurence: ");
	scanf("%d", &num);

	for (i = 0; i < size; i++)
	{
		if (arr[i] == num)
		{
			occr++;
		}
	}
 {
	printf("%d has occurred %d times.\n" ,num, occr);
 }
}