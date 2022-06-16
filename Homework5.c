#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i,arr[100],maximum,size,index;
	int Size= 5
	static int array1[] = {1, -1, 100, 32, 64, -97};
	static int array2[] = {-100, 1, -10, 50, -40, 100};

	printf("\n Enter array elements:- ");
 
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	maximum=arr[0];
	for(i=0;i<size;i++)
	{
		if(maximum<arr[i])
		{
		maximum=arr[i];
		index=i;
		}
	}
}