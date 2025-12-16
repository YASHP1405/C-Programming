/*           16. Print unique elements in an array
         17. Sort array in ascending order (Bubble Sort)              */
#include<stdio.h>
int main()
{
	int i,a[5],j,temp;
	for(i=0;i<=4;i++)
	{
		printf("Enter the elements to store in array : \n");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			
		}
		
	}
	printf("The Final array is : \n\n");
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}