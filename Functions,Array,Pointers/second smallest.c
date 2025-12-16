/*14. Find the second smallest number  */

#include<stdio.h>
int main()
{
	int a[5],i,min,semin;
	for(i=0;i<=4;i++)
	{
		printf("Enter the 5 integers to store\n");
		scanf("%d",&a[i]);
		
	}
	min = a[0];
	semin = a[0];
	for(i=0;i<=4;i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	for(i=0;i<=4;i++)
	{
		if(min < a[i])
		{
			if(a[i] < semin)
			{
				semin = a[i];
			}
		}
	}
	printf("Seecond minimum number : %d",semin);
	return 0;
}
